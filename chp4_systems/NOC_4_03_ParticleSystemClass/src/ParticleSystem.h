//
//  ParticleSystem.h
//  NOC_4_03_ParticleSystemClass
//
//  Created by Machiel Veltkamp on 5/1/13.
//
//

#ifndef __NOC_4_03_ParticleSystemClass__ParticleSystem__
#define __NOC_4_03_ParticleSystemClass__ParticleSystem__

#include "ofMain.h"
#include "Particle.h"

class ParticleSystem{
public:
    vector<Particle> particles;
    ofVec2f origin;
    
    ParticleSystem();
    void setOrigin(ofVec2f location);
    void addParticle();
    void run();
    
};

#endif /* defined(__NOC_4_03_ParticleSystemClass__ParticleSystem__) */
