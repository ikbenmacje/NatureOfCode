//
//  Mover.h
//  NOC_1_7_motion101
//
//  Created by Machiel Veltkamp on 3/18/13.
//
//

#include "ofMain.h"

class Bob{

public:
    ofVec2f location;
    ofVec2f velocity;
    ofVec2f acceleration;
    float mass;
    float damping;
    Boolean dragging;
    ofVec2f dragOffset;
    
    Bob(float x, float y);
    void update();
    void display();
    void clicked(int mx, int my);
    void stopDragging();
    void drag(int mx, int my);
    void applyForce(ofVec2f force);
    
    const  ofVec2f& getLocation();
    const  ofVec2f& getVelocity();
};