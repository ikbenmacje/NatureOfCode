//
//  Confetti.h
//  NOC_4_05_ParticleSystemInheritancePolymorphism
//
//  Created by Machiel Veltkamp on 5/1/13.
//
//


#include "ofMain.h"
#include "Particle.h"

class Confetti : public Particle{
public:
    Confetti(const ofVec2f &l);
    void display();
    void run();
    
};


