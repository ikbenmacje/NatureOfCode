//
//  Spring.cpp
//  NOC_3_11_spring
//
//  Created by Machiel Veltkamp on 3/20/13.
//
//

#include "Spring.h"


Spring::Spring(float x, float y, int l){
    anchor.set(x,y);
    len = l;
    k = 0.1;
    
}

void Spring::connect(Bob *b){
    // Vector pointing from anchor to bob location
    ofVec2f force = b->location - anchor;
    // What is distance
    float d = force.length();
    // Stretch is difference between current distance and rest length
    float stretch = d - len;
    
    // Calculate force according to Hooke's Law
    // F = k * stretch
    force.normalize();
    force *= (-1 * k * stretch);
    b->applyForce(force);
}

void Spring::constrainLength(Bob *b,float minlen, float maxlen){
    
    ofVec2f dir = b->location - anchor;
    float d = dir.length();
    // Is it too short?
    if (d < minlen) {
        dir.normalize();
        dir *= minlen;
        // Reset location and stop from moving (not realistic physics)
        b->location = anchor + dir;
        b->velocity *= 0;;
        // Is it too long?
    }
    else if (d > maxlen) {
        dir.normalize();
        dir *= maxlen;
        // Reset location and stop from moving (not realistic physics)
        b->location = anchor + dir;
        b->velocity *= 0;
    }
    
}
void Spring::display(){
    
    ofFill();
    ofSetColor(175);
    ofRect(anchor.x-5, anchor.y-5, 10, 10);
    
}
void Spring::displayLine(Bob *b){
    
   
    ofNoFill();
    ofSetLineWidth(2);
    ofSetColor(0);
    ofLine(b->location.x,b->location.y,anchor.x,anchor.y);
    //cout << b->location.x << " " << b->location.y << " " << anchor.x << " " << anchor.y << "\n";
    
}