#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(255);
    ofSetBackgroundAuto(false);
    ofEnableSmoothing();
    ofSetFrameRate(60);
    
    bob = new Bob(ofGetWidth()/2,100);
    spring = new Spring(ofGetWidth()/2,10,100);
   
}

//--------------------------------------------------------------
void ofApp::update(){
    
   
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    
    // Apply a gravity force to the bob
    ofVec2f gravity(0,2);
    bob->applyForce(gravity);
    
    // Connect the bob to the spring (this calculates the force)
    spring->connect(bob);
    // Constrain spring distance between min and max
    spring->constrainLength(bob,30,170);
    
    // Update bob
    bob->update();
    // If it's being dragged
    bob->drag(ofGetMouseX(),ofGetMouseY());
    
    // Draw everything
    spring->displayLine(bob); // Draw a line between spring and bob
    bob->display();
    spring->display();
    
    ofDrawBitmapString("click on bob to drag", 10,ofGetHeight()-5);
   
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
    bob->clicked(x,y);

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    bob->stopDragging();
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