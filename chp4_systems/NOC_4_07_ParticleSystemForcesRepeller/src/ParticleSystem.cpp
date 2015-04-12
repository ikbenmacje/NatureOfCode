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
    particles.push_back(new Particle(origin));
}

void ParticleSystem::applyForce(ofVec2f f){
    for(int i=0;i<particles.size();i++){
        particles[i]->applyForce(f);
    }
}

void ParticleSystem::applyRepeller(Repeller r) {
    for(int i=0;i<particles.size();i++){
        ofVec2f force = r.repel(*particles[i]);
        particles[i]->applyForce(force);
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