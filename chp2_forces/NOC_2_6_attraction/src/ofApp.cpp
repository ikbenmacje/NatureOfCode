#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(255);
    ofSetBackgroundAuto(false);
    ofEnableSmoothing();
    ofSetFrameRate(60);
   
}

//--------------------------------------------------------------
void ofApp::update(){
    
        ofVec2f force = a.attract(m);

        m.applyForce(force);
        m.update();
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    
    a.drag();
    a.hover(ofGetMouseX(),ofGetMouseY());
    
        a.display();
        m.display();
   
   
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
    a.clicked(x,y);

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    a.stopDragging();
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