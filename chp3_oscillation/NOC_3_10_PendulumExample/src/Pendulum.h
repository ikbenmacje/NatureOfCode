//
//  Pendulum.h
//  NOC_3_10_PendulumExample
//
//  Created by Machiel Veltkamp on 3/20/13.
//
//

#ifndef __NOC_3_10_PendulumExample__Pendulum__
#define __NOC_3_10_PendulumExample__Pendulum__

#include "ofMain.h"

class Pendulum{
    
public:
    ofVec2f   location;
    ofVec2f   origin;
    float r;
    float angle;
    float aVelocity;
    float aAcceleration;
    float ballr;
    float damping;
    Boolean dragging;
    
    Pendulum(ofVec2f origin_, float r_);
    void go();
    void update();
    void display();
    void clicked(int mx, int my);
    void stopDragging();
    void drag();

    
};

#endif /* defined(__NOC_3_10_PendulumExample__Pendulum__) */
