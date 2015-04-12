//
//  Pendulum.cpp
//  NOC_3_10_PendulumExample
//
//  Created by Machiel Veltkamp on 3/20/13.
//
//

#include "Pendulum.h"


Pendulum::Pendulum(ofVec2f origin_, float r_){
    dragging = false;
    origin = origin_; // pointer/reference  alert !
    location.set(0,0);
    
    r = r_;
    aVelocity = 0.0;
    aAcceleration = 0.0;
    damping = 0.995;
    ballr = 40.0;
    
}


void Pendulum::update(){
    if(!dragging){
        float gravity = 0.4;
        aAcceleration = (-1 * gravity / r) * sin(angle);
        aVelocity += aAcceleration;
        aVelocity *= damping;
        angle += aVelocity;
    }
    
}

void Pendulum::display(){
    
    location.set(r*sin(angle), r*cos(angle));
    location += origin;
    
    ofNoFill();
    ofSetColor(0);
    ofSetLineWidth(2);
    
    ofLine(origin.x,origin.y,location.x,location.y);
    
    ofFill();
    ofSetColor(175);
    if(dragging) ofSetColor(0);
    
    ofEllipse(location.x, location.y, ballr, ballr);
    
    
}

void Pendulum::drag(){
    
    if(dragging) {
        ofVec2f diff = origin - ofVec2f(ofGetMouseX(),ofGetMouseY());
        angle = atan2(-1*diff.y,diff.x) - ofDegToRad(90);
    }
    
}


void Pendulum::go(){
    update();
    drag();
    display();
    
}

void Pendulum::clicked(int mx, int my){
    float d = ofDist(mx, my, location.x, location.y);
    if( d < ballr){
        dragging = true;
    }

}
void Pendulum::stopDragging(){
    aVelocity = 0;
    dragging = false;
    
}

