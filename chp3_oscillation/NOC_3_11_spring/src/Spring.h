//
//  Spring.h
//  NOC_3_11_spring
//
//  Created by Machiel Veltkamp on 3/20/13.
//
//

#ifndef __NOC_3_11_spring__Spring__
#define __NOC_3_11_spring__Spring__

#include "ofMain.h"
#include "Mover.h"

class Spring {
    
public:
    ofVec2f anchor;
    float len;
    float k;
    Spring(float x, float y, int l);
    void connect(Bob* b);
    void constrainLength(Bob* b,float minlen, float maxlen);
    void display();
    void displayLine(Bob* b);
    
};

#endif /* defined(__NOC_3_11_spring__Spring__) */
