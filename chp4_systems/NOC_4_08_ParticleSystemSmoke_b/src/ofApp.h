#pragma once

#include "ofMain.h"
#include "ParticleSystem.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        ParticleSystem ps;
        ofVec2f wind;
    
        void drawVector(ofVec2f wind, ofVec2f loc, float scayl);
		
};
