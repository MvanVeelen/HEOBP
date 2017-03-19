
#include "Particle.h"

Particle::Particle() {
	angle = 0;
	radius = ofRandom(0, 20);
	startPosition = ofPoint(ofGetWidth() / 2, ofGetHeight() / 2);
	randomValue = ofRandom(0, 300);
	speed = ofVec2f(ofRandom(-5, 5), ofRandom(-5, 5));


}

void Particle::move() {
	angle += 0.1 * randomValue / 250;
	position.x = startPosition.x + cos(angle)* randomValue;
	position.y = startPosition.y + sin(angle)* randomValue;


}

void Particle::draw() {
	ofSetColor(outerColour);

	float rand1 = 3.1;
	float rand2 = 3.2;
	ofDrawCircle(position.x, position.y, radius * ofRandom(rand1, rand2));

	ofSetColor(innerColour);
	ofDrawCircle(position.x, position.y, radius);

	ofSetColor(centerColour);
	ofDrawCircle(position.x, position.y, radius*0.25);
}
