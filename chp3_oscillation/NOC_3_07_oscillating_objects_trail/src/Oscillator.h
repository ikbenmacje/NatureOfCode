//
//  Oscillator.h
//  NOC_3_07_oscillating_objects
//
//  Created by Machiel Veltkamp on 3/20/13.
//
//

#ifndef __NOC_3_07_oscillating_objects__Oscillator__
#define __NOC_3_07_oscillating_objects__Oscillator__

#include "ofMain.h"

class Oscillator{

public:    
    ofVec2f angle;
    ofVec2f velocity;
    ofVec2f amplitude;
    
    Oscillator();
    void oscillate();
    void display();
    
    
    
};

#endif /* defined(__NOC_3_07_oscillating_objects__Oscillator__) */
