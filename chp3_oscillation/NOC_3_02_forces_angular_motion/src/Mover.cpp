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
    velocity.set(1,0);
    acceleration.set(0,0);
    mass = m;
    
    
    angle = 0;
    aVelocity = 0;
    aAcceleration = 0;
    
}


void Mover::applyForce(ofVec2f force){
    ofVec2f f = force / mass;
    acceleration += f;
    
}

void Mover::update(){
    
    velocity += acceleration;
    location += velocity;
    
    aAcceleration = acceleration.x / 10.0;
    aVelocity += aAcceleration;
    aVelocity = ofClamp(aVelocity,-0.1,0.1);
    angle += aVelocity;
    
    
    acceleration *= 0;
}

void Mover::display(){
    
    ofEnableAlphaBlending();
    ofPushMatrix();
    ofTranslate(location.x,location.y);
    ofRotate(ofRadToDeg(angle)); // default rotation of processing is radians and of OF is degrees
    
    ofFill();
    ofSetColor(127,100);
    ofRect(0,0, mass*16,mass*16);

    ofNoFill();
    ofSetColor(0);
    ofSetLineWidth(2);
    ofRect(0,0, mass*16,mass*16);
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
