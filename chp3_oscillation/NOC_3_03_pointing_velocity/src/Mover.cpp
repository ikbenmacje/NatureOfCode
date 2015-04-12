//
//  Mover.cpp
//  NOC_1_7_motion101
//
//  Created by Machiel Veltkamp on 3/18/13.
//
//


#include "Mover.h"



Mover::Mover(){
    location.set(ofGetWidth()/2,ofGetHeight()/2);
    velocity.set(0,0);
    acceleration.set(0,0);
    topspeed = 4;
    r = 16;
    xoff = 1000;
    yoff = 0;
    
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
    
    
    
    acceleration *= 0;
}

void Mover::display(){
    
    float rotate = atan2(velocity.y, velocity.x);
    
    ofEnableAlphaBlending();
    ofPushMatrix();
    ofTranslate(location.x,location.y);
    ofRotate(ofRadToDeg(rotate)); // default rotation of processing is radians and of OF is degrees
    
    ofFill();
    ofSetColor(127,100);
    ofRect(0,0, 30,10);

    ofNoFill();
    ofSetColor(0);
    ofSetLineWidth(2);
    ofRect(0,0, 30, 10);
    ofDisableAlphaBlending();
    ofPopMatrix();
    
}


const ofVec2f& Mover::getLocation(){
    return location;
}

const ofVec2f& Mover::getVelocity(){
    return velocity;
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
