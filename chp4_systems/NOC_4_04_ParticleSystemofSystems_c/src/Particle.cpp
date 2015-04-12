//
//  Particle.cpp
//  NOC_4_01_SingleParticle
//
//  Created by Machiel Veltkamp on 3/27/13.
//
//

#include "Particle.h"


Particle::Particle(const ofVec2f &l) {
    acceleration.set(0, 0.05);
    velocity.set(ofRandom(-1, 1), ofRandom(-1, 0));
    //location = l.get();
    location = l; // pionters reference ?
    lifespan = 255.0;
}

void Particle::run() {
    update();
    display();
}

// Method to update location
void Particle::update() {
    velocity += acceleration;
    location += velocity;
    lifespan -= 2.0;
}

// Method to display
void Particle::display() {
    ofSetColor(0, lifespan);
    ofNoFill();
    ofSetLineWidth(2);
    ofEllipse(location.x, location.y, 12, 12);
    
    ofSetColor(127, lifespan);
    ofFill();
    ofEllipse(location.x, location.y, 12, 12);
}

// Is the particle still useful?
Boolean Particle::isDead() {
    if (lifespan < 0.0) {
        return true;
    }
    else {
        return false;
    }
}