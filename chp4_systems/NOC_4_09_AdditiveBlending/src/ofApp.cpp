#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0);
    //ofSetBackgroundAuto(false);
    ofEnableSmoothing();
    ofSetFrameRate(30);
    
    ps.setOrigin(ofVec2f(ofGetWidth()/2,ofGetHeight()-35));
    
    ofEnableBlendMode(OF_BLENDMODE_ADD);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    float dx = ofMap(mouseX,0,ofGetWidth(),-0.2,0.2);
    wind = ofVec2f(dx,0);
    ps.applyForce(wind);
    for(int i=0;i<2;i++){
        ps.addParticle();
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofEnableBlendMode(OF_BLENDMODE_ADD);

    
    ps.run();
    
    // Draw an arrow representing the wind force
    drawVector(wind, ofVec2f(ofGetWidth()/2,50),500);
 

}

//--------------------------------------------------------------
void ofApp::drawVector(ofVec2f v, ofVec2f loc, float scayl){
    
    ofPushMatrix();
    float arrowsize = 4;
    // Translate to location to render vector
    ofTranslate(loc.x,loc.y);
    ofSetColor(255);
    // Call vector heading function to get direction (note that pointing up is a heading of 0) and rotate
    float rotate = atan2(v.y, v.x);
    ofRotate(ofRadToDeg(rotate)); // default rotation of processing is radians and of OF is degrees
    
    // Calculate length of vector & scale it to be bigger or smaller if necessary
    float len = v.length()*scayl;
    // Draw three lines to make an arrow (draw pointing up since we've rotate to the proper direction)
    ofLine(0,0,len,0);
    ofLine(len,0,len-arrowsize,+arrowsize/2);
    ofLine(len,0,len-arrowsize,-arrowsize/2);
    ofPopMatrix();
    
    
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
   

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}