//
//  Mover.h
//  NOC_1_7_motion101
//
//  Created by Machiel Veltkamp on 3/18/13.
//
//

#include "ofMain.h"

class Mover{

public:
    ofVec2f location;
    ofVec2f velocity;
    ofVec2f acceleration;
    float mass;
    Mover(float m, float x, float y);
    void update();
    void display();
    void checkEdges();
    void applyForce(ofVec2f force);
    
    const  ofVec2f& getLocation();
    const  ofVec2f& getVelocity();
};