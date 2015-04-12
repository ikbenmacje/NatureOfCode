//
//  Particle.h
//  NOC_4_01_SingleParticle
//
//  Created by Machiel Veltkamp on 3/27/13.
//
//


#ifndef __NOC_4_01_SingleParticle__Particle__
#define __NOC_4_01_SingleParticle__Particle__

#include "ofMain.h"

class Particle{
public:
    ofVec2f location;
    ofVec2f velocity;
    ofVec2f acceleration;
    float lifespan;
    
    Particle(const ofVec2f &l);
    
    void update();
    void display();
    virtual void run();
    Boolean isDead();
    

};

#endif /* defined(__NOC_4_01_SingleParticle__Particle__) */
