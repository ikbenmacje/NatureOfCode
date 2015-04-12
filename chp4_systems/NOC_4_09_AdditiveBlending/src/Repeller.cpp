//
//  Repeller.cpp
//  NOC_4_07_ParticleSystemForcesRepeller
//
//  Created by Machiel Veltkamp on 5/1/13.
//
//

#include "Repeller.h"


Repeller::Repeller(){
    
    location.set(ofGetWidth()/2,ofGetHeight()/2);
    strength = 100;
    r = 10;
    d = 48;
    
}

ofVec2f Repeller::repel(Particle p){
    
    ofVec2f dir = location - p.location;   // Calculate direction of force
    float d = dir.length();                // Distance between objects
    
    
    dir.normalize();
    d = ofClamp(d,5.0,100.0);               // Keep distance within a reasonable range
    float force = -1 * strength / (d * d);         // Repelling force is inversely proportional to distance
    dir *= force;                           // Get force vector --> magnitude * direction
    return dir;
    
}

void Repeller::display(){
    
   
    ofSetColor(175);
    
    ofFill();
    ofEllipse(location.x,location.y,d,d);
    
    ofSetLineWidth(4);
    ofNoFill();
    ofSetColor(0);
    ofEllipse(location.x,location.y,d,d);
    
    
}

