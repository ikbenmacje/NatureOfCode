//
//  Mover.cpp
//  NOC_1_7_motion101
//
//  Created by Machiel Veltkamp on 3/18/13.
//
//

#include "Mover.h"


Mover::Mover(){
    location.set(ofRandom(ofGetWidth()),ofRandom(ofGetHeight()));
    velocity.set(0,0);
    acceleration.set(-0.001,0.01);
    topspeed = 6;
}

void Mover::update(){
    
    ofVec2f mouse(ofGetMouseX(),ofGetMouseY());
    ofVec2f dir = mouse - location;
    
    dir.normalize();
    dir *= 0.5;
    
    acceleration = dir;
    
    velocity += acceleration;
    velocity.limit(topspeed);
    location += velocity;
}

void Mover::display(){
    
    
    ofFill();
    ofSetColor(127);
    ofCircle(location.x, location.y, 24);
    
    ofNoFill();
    ofSetColor(0);
    ofSetLineWidth(2);
    ofCircle(location.x, location.y, 24);
    
}

void Mover::checkEdges(){
    
    if (location.x > ofGetWidth()) {
        location.x = 0;
    }
    else if (location.x < 0) {
        location.x = ofGetWidth();
    }
    
    if (location.y > ofGetHeight()) {
        location.y = 0;
    }
    else if (location.y < 0) {
        location.y = ofGetHeight();
    }
    
}
