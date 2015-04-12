//
//  Confetti.cpp
//  NOC_4_05_ParticleSystemInheritancePolymorphism
//
//  Created by Machiel Veltkamp on 5/1/13.
//
//

#include "Confetti.h"


Confetti::Confetti(const ofVec2f &l):Particle(l){
}

void Confetti::run(){
    Particle::update();
    Confetti::display();
}
 

void Confetti::display(){
        
    float theata = ofMap(location.x, 0, ofGetWidth(), 0, 360*2);
    
    ofPushMatrix();
    ofTranslate(location.x, location.y);
    ofRotateZ(theata);
    
    ofSetColor(0, lifespan);
    ofNoFill();
    ofSetLineWidth(2);
    ofRect(0, 0, 12, 12);
    
    ofSetColor(127, lifespan);
    ofFill();
    ofRect(0, 0, 12, 12);
    ofPopMatrix();
    
}