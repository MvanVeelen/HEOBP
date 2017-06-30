#include "Particle.h"

Particle::Particle(int startX, int startY) {
	angle = 0;
	radius = ofRandom(10, 20);
	randomValue = ofRandom(0, 250);
	position = ofPoint(ofGetWidth() / 2, ofGetHeight() / 2);
	startPosition = ofPoint(startX, startY);
	speed = ofVec2f(ofRandom(-5, 5), ofRandom(-5, 5));
	centerColour = ofColor(ofRandom(100, 200), ofRandom(100, 200), ofRandom(100, 200), ofRandom(200, 255));
	middleColour = ofColor(ofRandom(0,50), ofRandom(100,200), ofRandom(100, 200), ofRandom(100,150));
	outerColour = ofColor(ofRandom(100, 200), ofRandom(100, 200), ofRandom(100, 200), ofRandom(0,100));
}

void Particle::SetColors(ofColor center, ofColor middle, ofColor outer) {
	centerColour = center;
	middleColour = middle;
	outerColour = outer;
}

void Particle::Handle() {
	angle += 0.1 * randomValue / 1050;
	position.x = startPosition.x + cos(angle)* randomValue;
	position.y = startPosition.y + sin(angle)* randomValue;
}


void Particle::Draw() {
	ofSetColor(outerColour);
	ofDrawCircle(position.x, position.y, radius * 2.0);

	ofSetColor(middleColour);
	ofDrawCircle(position.x, position.y, radius);

	ofSetColor(centerColour);
	ofDrawCircle(position.x, position.y, radius * 0.25);
}