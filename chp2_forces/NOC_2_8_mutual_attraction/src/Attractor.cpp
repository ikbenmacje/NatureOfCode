//
//  Attractor.cpp
//  NOC_2_6_attraction
//
//  Created by Machiel Veltkamp on 3/19/13.
//
//

#include "ofMain.h"
#include "Attractor.h"



Attractor::Attractor(){
    location.set(ofGetWidth()/2,ofGetHeight()/2);
    mass = 20;
    G = 1;
    dragOffset.set(0,0);
}

ofVec2f Attractor::attract(Mover m){
    
    ofVec2f force = location - m.getLocation();   // Calculate direction of force
    float d = force.length();                              // Distance between objects
    d = ofClamp(d,5.0,25.0);

    force.normalize();                                  // Normalize vector (distance doesn't matter here, we just want this vector for direction)
    float strength = (G * mass * m.mass) / (d * d);      // Calculate gravitional force magnitude
    force *= strength;                                  // Get force vector --> magnitude * direction
    return force;

}

void Attractor::display(){
    
    
    if (dragging) ofSetColor(50);
    else if (rollover) ofSetColor(100);
    else ofSetColor(175);
    
    ofFill();
    ofEllipse(location.x,location.y,mass*2,mass*2);
    
    ofSetLineWidth(4);
    ofNoFill();
    ofSetColor(0);
    ofEllipse(location.x,location.y,mass*2,mass*2);
   
    
}

void Attractor::clicked(int mx, int my){
    float d = ofDist(mx,my,location.x,location.y);
    if (d < mass) {
        dragging = true;
        dragOffset.x = location.x-mx;
        dragOffset.y = location.y-my;
    }
    
}

void Attractor::hover(int mx, int my){
    float d = ofDist(mx,my,location.x,location.y);
    if (d < mass) {
        rollover = true;
    }
    else {
        rollover = false;
    }
    
}

void Attractor::stopDragging(){
    dragging = false;
}


void Attractor::drag() {
    if (dragging) {
        location.x = ofGetMouseX() + dragOffset.x;
        location.y = ofGetMouseY() + dragOffset.y;
    }
}
