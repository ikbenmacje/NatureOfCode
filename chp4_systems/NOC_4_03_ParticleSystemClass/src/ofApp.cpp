#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(255);
    //ofSetBackgroundAuto(false);
    ofEnableSmoothing();
    ofSetFrameRate(30);
    ps.setOrigin(ofVec2f(ofGetWidth()/2,50));
    
}

//--------------------------------------------------------------
void ofApp::update(){
    ps.addParticle();
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    ps.run();
 

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