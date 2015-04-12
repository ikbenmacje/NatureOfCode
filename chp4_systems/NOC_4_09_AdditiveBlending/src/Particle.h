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
    float mass = 1;
    ofImage img;
    
    Particle(const ofVec2f &l, const ofImage &img_);
    
    void update();
    void display();
    void applyForce(ofVec2f force);
    virtual void run();
    Boolean isDead();
    

};

#endif /* defined(__NOC_4_01_SingleParticle__Particle__) */
