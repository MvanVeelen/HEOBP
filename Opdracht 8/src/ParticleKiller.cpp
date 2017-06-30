#include "ParticleKiller.h"

// RestInPesos kan een constant zijn doordat we dit niet gaan aanpassen tijdens de applicatie
const void ParticleKiller::RestInPesos(vector<Particle*>& particles) {
    for (vector<Particle*>::iterator it = particles.begin(); it != particles.end();) {
        if ((*it)->isDead()) {
            delete *it;
            it = particles.erase(it);
        } else {
            ++it;
        }
    }
}
