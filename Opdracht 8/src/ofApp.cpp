#include "ofApp.h"

void ofApp::setup() {
    ofBackground(ofColor(30,0,44));
    emitter1 = ParticleEmitter();
    emitter1.setOrigin(512, 384);
    emitter1.setColours(ofColor(127, 31, 255, 127), ofColor(255, 128, 255, 10));
    emitter1.setCurvingParticleRatio(0.05);

    emitter2 = ParticleEmitter();
    emitter2.setOrigin(512, 384);
    emitter2.setColours(ofColor(240, 90, 120, 127), ofColor(250, 130, 155, 10));
    emitter2.setCurvingParticleRatio(0.9);
}

void ofApp::update() {
    for (unsigned int i = 0; i < particles.size(); ++i) {
        particles[i]->move();
    }

    if (ofGetFrameNum() % 5 == 0) {
        Particle* freshParticle = emitter1.emit();
        particles.push_back(freshParticle);

        Particle* freshParticle2 = emitter2.emit();
        particles.push_back(freshParticle2);
    }

    reaper.RestInPesos(particles);

    ofSetWindowTitle("Particles: " + ofToString(particles.size()));
}

void ofApp::draw() {
    for (unsigned int i = 0; i < particles.size(); ++i) {
        particles[i]->draw();
    }
}

void ofApp::keyPressed(int key) {
}