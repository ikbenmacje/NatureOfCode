//
//  Mover.cpp
//  NOC_1_7_motion101
//
//  Created by Machiel Veltkamp on 3/18/13.
//
//

#include "Mover.h"


Mover::Mover(){
    location.set(400,50);
    velocity.set(1,0);
    acceleration.set(0,0);
    mass = 1;
}


void Mover::applyForce(ofVec2f force){
    ofVec2f f = force / mass;
    acceleration += f;
    
}

void Mover::update(){
    
    velocity += acceleration;
    location += velocity;
    acceleration *= 0;
}

void Mover::display(){
    
    
    ofFill();
    ofSetColor(127);
    ofCircle(location.x, location.y, mass*8);
    
    ofNoFill();
    ofSetColor(0);
    ofSetLineWidth(2);
    ofCircle(location.x, location.y, mass*8);
    
}

const ofVec2f& Mover::getLocation(){
    return location;
}

const ofVec2f& Mover::getVelocity(){
    return velocity;
}

void Mover::checkEdges(){
    
    if (location.x > ofGetWidth()) {
        location.x = ofGetWidth();
        velocity.x *= -1;
    }
    else if (location.x < 0) {
        velocity.x *= -1;
        location.x = 0;
    }
    
    if (location.y > ofGetHeight()) {
        velocity.y *= -1;
        location.y = ofGetHeight();
    }
       
}
