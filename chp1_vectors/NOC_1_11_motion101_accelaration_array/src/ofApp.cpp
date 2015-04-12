#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(800, 200);
    ofBackground(255);
    ofSetBackgroundAuto(false);
    ofEnableSmoothing();
    ofSetFrameRate(60);
    
    //mover.assign(20,Mover()); // --> put twenty empty movers inside
    //mover.resize(20); // --> make array of twenty but do not run constructor ?
    
    // make loop to add 20 seperate movers so thath there constructor is also called
    for(int i=0;i<20;i++){
        mover.push_back(Mover());
    }
    

}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i=0;i<mover.size();i++){
        ofLogNotice(ofToString(i));
        mover[i].update();
        mover[i].checkEdges();
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    for(int i=0;i<mover.size();i++){
        mover[i].display();
    }
    
   
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