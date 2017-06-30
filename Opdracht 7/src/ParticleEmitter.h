#pragma once

#include "Particle.h"

class ParticleEmitter {
    public:
		static ParticleEmitter* instance(); //this is new too
		Particle* createParticles();
        void setPos(int x, int y);
        void setCurvingParticleRatio(float ratio);
        void setColors(ofColor centerColour, ofColor innerColour, ofColor outerColour);

    protected:
        int posX, posY;
        float curvingParticleRatio;
        ofColor centerColor, innerColor, outerColor;

		static ParticleEmitter* oneInstance;
		//this is new 
};

