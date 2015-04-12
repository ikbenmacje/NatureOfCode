#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(800, 200);
    ofBackground(255);
    ofSetBackgroundAuto(false);
    ofEnableSmoothing();
    ofSetFrameRate(60);
    
    // make loop to add 20 seperate movers so that their constructor is also called
    for(int i=0;i<20;i++){
        movers.push_back(Mover(ofRandom(0.1,4),0,0));
    }

}

//--------------------------------------------------------------
void ofApp::update(){
    
    for(int i=0;i<movers.size();i++){
        
        ofVec2f wind(0.01,0);
        float m = movers[i].mass;
        ofVec2f gravity(0,0.1*m);
        
        movers[i].applyForce(wind);
        movers[i].applyForce(gravity);
        movers[i].update();
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    
    for(int i=0;i<movers.size();i++){

        movers[i].display();
        movers[i].checkEdges();
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