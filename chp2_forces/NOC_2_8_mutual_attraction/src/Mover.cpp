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
    G = 0.4;
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

ofVec2f Mover::attract(Mover m){
    
    ofVec2f force = location - m.getLocation();   // Calculate direction of force
    float d = force.length();                              // Distance between objects
    d = ofClamp(d,5.0,25.0);
    
    force.normalize();                                  // Normalize vector (distance doesn't matter here, we just want this vector for direction)
    float strength = (G * mass * m.mass) / (d * d);      // Calculate gravitional force magnitude
    force *= strength;                                  // Get force vector --> magnitude * direction
    return force;
    
}

void Mover::display(){
    
    ofEnableAlphaBlending();
    ofFill();
    ofSetColor(127,100);
    ofCircle(location.x, location.y, mass*8);
    
    ofNoFill();
    ofSetColor(0);
    ofSetLineWidth(2);
    ofCircle(location.x, location.y, mass*8);
    ofDisableAlphaBlending();
    
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
