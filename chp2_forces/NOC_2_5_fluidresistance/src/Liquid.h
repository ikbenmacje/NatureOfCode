//
//  Liquid.h
//  NOC_2_5_fluidresistance
//
//  Created by Machiel Veltkamp on 3/19/13.
//
//

#include "ofMain.h"
#include "Mover.h"

class Liquid{
    
public:
    float x,y,w,h;
    float c;
    Liquid(float x_, float y_,float w_,float h_, float c_);
    bool isContaining(Mover m);
    bool contains(Mover m);
    ofVec2f drag(Mover m);
    void display();
};