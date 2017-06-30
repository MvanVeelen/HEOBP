#include "Particle.h"

Particle::Particle(int startX, int startY) {
	angle = 0;
	radius = ofRandom(10, 20);
	randomValue = ofRandom(0, 250);
	position = ofPoint(startX, startY);
    startPosition = ofPoint(startX, startY);
    speed = ofVec2f(ofRandom(-5, 5), ofRandom(-5, 5));
	lifetime = 100;
}

void Particle::SetColors(ofColor centerColor, ofColor innerColor, ofColor outerColor) {
    centerColour = centerColor;
    middleColour = innerColor;
    outerColour = outerColor;
}

void Particle::Handle() {
	angle += 0.1 * randomValue / 1050;
	position.x = startPosition.x + cos(angle)* randomValue;
	position.y = startPosition.y + sin(angle)* randomValue;
}

void Particle::Draw() {
    ofSetColor(outerColour);
    ofDrawCircle(position.x, position.y, radius * 2.0);

    ofSetColor(centerColour);
    ofDrawCircle(position.x, position.y, radius);

    ofSetColor(middleColour);
    ofDrawCircle(position.x, position.y, radius * 0.25);
}
