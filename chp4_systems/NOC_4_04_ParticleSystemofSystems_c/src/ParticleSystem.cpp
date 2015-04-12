//
//  ParticleSystem.cpp
//  NOC_4_03_ParticleSystemClass
//
//  Created by Machiel Veltkamp on 5/1/13.
//
//

#include "ParticleSystem.h"


ParticleSystem::ParticleSystem(int num, ofVec2f location){
    origin = location; //pointers references ??
    for(int i=0;i<num;i++){
        particles.push_back(Particle(origin));
    }
}


void ParticleSystem::addParticle(){
    particles.push_back(Particle(origin));
}

void ParticleSystem::run(){
    
    ofEnableAlphaBlending();
    for(int i=0;i<particles.size();i++){
        particles[i].run();
        
        if(particles[i].isDead()){
            particles.erase(particles.begin()+i);
        }
        
    }
    ofDisableAlphaBlending();
    
}

// A method to test if the particle system still has particles
bool ParticleSystem::dead() {
    if (particles.size()==0) {
        return true;
    } else {
        return false;
    }
}