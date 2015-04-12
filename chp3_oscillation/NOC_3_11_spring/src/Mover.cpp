//
//  Mover.cpp
//  NOC_1_7_motion101
//
//  Created by Machiel Veltkamp on 3/18/13.
//
//

#include "Mover.h"


Bob::Bob(float x, float y){
    location.set(x,y);
    velocity.set(0,0);
    acceleration.set(0,0);
    mass = 24;
    damping = 0.98;
    dragging = false;
}


void Bob::applyForce(ofVec2f force){
    ofVec2f f = force / mass;
    acceleration += f;
    
}

void Bob::update(){
    
    velocity += acceleration;
    velocity *= damping;
    location += velocity;
    acceleration *= 0;
}

void Bob::display(){
    
    
    ofFill();
    ofSetColor(127);
    ofCircle(location.x, location.y, mass);
    
    ofNoFill();
    ofSetColor(0);
    ofSetLineWidth(2);
    ofCircle(location.x, location.y, mass);
    
}

const ofVec2f& Bob::getLocation(){
    return location;
}

const ofVec2f& Bob::getVelocity(){
    return velocity;
}

void Bob::clicked(int mx, int my){
    float d = ofDist(mx,my,location.x,location.y);
    if (d < mass) {
        dragging = true;
        dragOffset.x = location.x-mx;
        dragOffset.y = location.y-my;
    }
    
}
void Bob::stopDragging(){
    dragging = false;
    
}
void Bob::drag(int mx, int my){
    if (dragging) {
        location.x = mx + dragOffset.x;
        location.y = my + dragOffset.y;
    }
    
}

