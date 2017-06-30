#include "ParticleKiller.h"

void ParticleKiller::RestInPesos(vector<Particle*>& particles) {
	for (vector<Particle*>::iterator ParticularParticle = particles.begin(); ParticularParticle != particles.end();) {
		if ((*ParticularParticle)->isDead()) {
			delete *ParticularParticle;
			ParticularParticle = particles.erase(ParticularParticle);
		}
		else {
			++ParticularParticle;
		}
	}
}