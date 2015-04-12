#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(800, 200);
    ofBackground(255);
    ofSetBackgroundAuto(false);
    ofEnableSmoothing();
    ofSetFrameRate(60);

}

//--------------------------------------------------------------
void ofApp::update(){
    
    ofVec2f wind(0.01,0);
    ofVec2f gravity(0,0.1);
    
    mover.applyForce(wind);
    mover.applyForce(gravity);
    mover.update();
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    
    mover.display();
    mover.checkEdges();
   
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