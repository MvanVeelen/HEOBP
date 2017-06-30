#include "CurvingParticle.h"

CurvingParticle::CurvingParticle(int startX, int startY) : Particle(startX, startY) {
    curve = ofVec2f(ofRandom(-10, 10), ofRandom(-10, 10));
}

void CurvingParticle::Handle() {
    position += speed;
    curve.rotate(2);
    position += curve;
}