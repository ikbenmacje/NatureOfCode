//
//  Oscillator.cpp
//  NOC_3_07_oscillating_objects
//
//  Created by Machiel Veltkamp on 3/20/13.
//
//

#include "Oscillator.h"

Oscillator::Oscillator(){
    angle.set(0,0);
    velocity.set(ofRandom(-0.05,0.05),ofRandom(-0.05,0.05));
    amplitude.set(ofRandom(20,ofGetWidth()/2),ofRandom(20,ofGetHeight()));
    
}
void Oscillator::oscillate(){
    angle += velocity;
    
}
void Oscillator::display(){
    
    float x = sin(angle.x)*amplitude.x;
    float y = sin(angle.y)*amplitude.y;
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    ofNoFill();
    ofSetColor(0);
    ofSetLineWidth(2);
    ofLine(0,0, x, y);
    
    ofFill();
    ofSetColor(127,127);
    ofEllipse(x, y, 32, 32);
    ofPopMatrix();
    
}
