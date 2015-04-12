//
//  Particle.cpp
//  NOC_4_01_SingleParticle
//
//  Created by Machiel Veltkamp on 3/27/13.
//
//

#include "Particle.h"


Particle::Particle(const ofVec2f &l, const ofImage &img_) {
    acceleration.set(0, 0);
    velocity.set(ofRandom(-1, 1), ofRandom(0, -2));
    //location = l.get();
    location = l; // pionters reference ?
    lifespan = 255.0;
    img = img_;
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
    acceleration *= 0;
}

void Particle::applyForce(ofVec2f force){
    ofVec2f f = force / mass;
    acceleration += f;

    
}


// Method to display
void Particle::display() {
    //ofSetColor(255, lifespan);
    //img.draw(location.x,location.y);
    
    ofSetColor(255, lifespan);
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
