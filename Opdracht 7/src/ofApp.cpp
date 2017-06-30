#include "ofApp.h"

void ofApp::setup() {
	ofColor rc = ofColor(ofRandom(0, 55), ofRandom(0, 55), ofRandom(0, 55));
	ofBackground(rc);

	particleEmitter = ParticleEmitter();
	particleEmitter.setPos(400, 400);
	particleEmitter.setCurvingParticleRatio(0.1);
	particleEmitter.setColors(ofColor::white, ofColor(ofRandom(0, 255), ofRandom(0, 50), ofRandom(0, 255), 200), ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255), 50));

}

void ofApp::update() {
	for (unsigned int i = 0; i < particles.size(); ++i) {
		particles[i]->Handle();
	}

	if (ofGetFrameNum() % 5 == 0) {
		Particle* freshParticle = particleEmitter.createParticles();
		particles.push_back(freshParticle);
	}

	particlekiller.RestInPesos(particles);

	ofSetWindowTitle("Particles: " + ofToString(particles.size()));
}

void ofApp::draw() {
    for (int i = 0; i < particles.size(); i++) {
		particles[i]->Draw();
    }
}

void ofApp::Reset() {
	particles.clear();

	amountParticles = 0;

	hitMax = false;

}