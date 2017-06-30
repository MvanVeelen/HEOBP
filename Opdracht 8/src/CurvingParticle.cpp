#include "CurvingParticle.h"

CurvingParticle::CurvingParticle(int startX, int startY) : Particle(startX, startY) {
    curve = ofVec2f(ofRandom(-8, 8),
                    ofRandom(-8, 8));
}

CurvingParticle::~CurvingParticle() {
}

const void CurvingParticle::move() {
    position += speed;
    curve.rotate(2.5);
    position += curve;
}
