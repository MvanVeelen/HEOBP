#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "ParticleEmitter.h"

#define MAXPARTICLES 300

class ofApp : public ofBaseApp {

    public:
		int amountParticles;
		bool hitMax = false;

        void setup();
        void update();
        void draw();
		void Reset();

        vector<Particle*> particles;

        ParticleEmitter particleEmitter;

};
