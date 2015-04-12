//
//  Mover.cpp
//  NOC_1_7_motion101
//
//  Created by Machiel Veltkamp on 3/18/13.
//
//

#include "Mover.h"


Mover::Mover(float m, float x, float y){
    location.set(x,y);
    velocity.set(0,0);
    acceleration.set(0,0);
    mass = m;
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
        velocity.y *= -0.9;
        location.y = ofGetHeight();
    }
       
}
