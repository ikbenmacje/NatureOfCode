//
//  ParticleSystem.cpp
//  NOC_4_03_ParticleSystemClass
//
//  Created by Machiel Veltkamp on 5/1/13.
//
//

#include "ParticleSystem.h"


ParticleSystem::ParticleSystem(){
    
}

void ParticleSystem::setOrigin(ofVec2f location){
    origin = location; //pointers references ?
}

void ParticleSystem::addParticle(){
     //particles.push_back(Confetti(origin));
    
    float r = ofRandom(1.0);
    if (r < 0.5) {
        particles.push_back(new Particle(origin));
        cout << "p";
    }else{
        particles.push_back(new Confetti(origin));
        cout << "c";
    }

    
}

void ParticleSystem::run(){
    // confetti is not being called!!
    
    ofEnableAlphaBlending();
    for(int i=0;i<particles.size();i++){
        particles[i]->run();
        
        if(particles[i]->isDead()){
            particles.erase(particles.begin()+i);
        }
        
    }
    ofDisableAlphaBlending();
    
}