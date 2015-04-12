//
//  Attractor.h
//  NOC_2_6_attraction
//
//  Created by Machiel Veltkamp on 3/19/13.
//
//

#include "ofMain.h"
#include "Mover.h"

class Attractor{
    
public:
    ofVec2f location;
    ofVec2f dragOffset;
    bool dragging = false;
    bool rollover = false;
    float mass;
    float G;
    Attractor();
    ofVec2f attract(Mover m);
    void display();
    void clicked(int mx, int my);
    void hover(int mx, int my);
    void stopDragging();
    void drag();


};