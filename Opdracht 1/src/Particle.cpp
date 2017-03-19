
#include "Particle.h"

Particle::Particle() {
	angle = 0;
	radius = ofRandom(0, 20);
	startPosition = ofPoint(ofGetWidth() / 2, ofGetHeight() / 2);
	randomValue = ofRandom(0, 300);
	speed = ofVec2f(ofRandom(-3, 3), ofRandom(-3, 3));
	innerColour = ofColor(ofRandom(255), ofRandom(0), ofRandom(255), ofRandom(50,100));
	outerColour = ofColor(ofRandom(255), ofRandom(0), ofRandom(255), ofRandom(0,50));

}

void Particle::move() {
	angle += 0.1 * randomValue / 25000;
	position.x = startPosition.x + 2 * randomValue;
	position.y = startPosition.y + 2 * randomValue;


}

void Particle::draw() {
	ofSetColor(outerColour);

	float rand1 = 3.1;
	float rand2 = 3.2;
	ofDrawCircle(position.x, position.y, radius * ofRandom(rand1,rand2));

	ofSetColor(innerColour);
	ofDrawCircle(position.x, position.y, radius);

	ofSetColor(centerColour);
	ofDrawCircle(position.x, position.y, radius*0.25);
}
