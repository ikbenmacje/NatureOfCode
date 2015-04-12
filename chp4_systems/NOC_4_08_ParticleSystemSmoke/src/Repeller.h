//
//  Repeller.h
//  NOC_4_07_ParticleSystemForcesRepeller
//
//  Created by Machiel Veltkamp on 5/1/13.
//
//

#ifndef __NOC_4_07_ParticleSystemForcesRepeller__Repeller__
#define __NOC_4_07_ParticleSystemForcesRepeller__Repeller__

#include "ofMain.h"
#include "Particle.h"

class Repeller{
    
public:
    ofVec2f location;
    float strength;
    float r;
    float d;
    
    Repeller();
    ofVec2f repel(Particle p);
    void display();
};

#endif /* defined(__NOC_4_07_ParticleSystemForcesRepeller__Repeller__) */
