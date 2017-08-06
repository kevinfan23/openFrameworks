#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    // set canvas backgroud
    ofBackground(0, 0, 0);
    
    // generate random particles throughout the canvas
    for (int i = 0; i < 500; i++) {
        size[i] = 0;
        pos[i] = ofVec2f(ofRandom(0, ofGetWindowWidth()), ofRandom(0, ofGetWindowHeight()));
        vel[i] = ofVec2f(ofRandom(-2, 2), ofRandom(-2, 2));
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    
    // update the speed
    for (int i = 0; i < 500; i++) {
        pos[i] += vel[i];
        
        if (pos[i].y < 0 || pos[i].y > ofGetWindowHeight()) {
            vel[i].y = -vel[i].y;
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    // start drawing cicle
    for (int i = 0; i < 500; i++) {
        // start drawing cicle with random colors
        ofSetColor(ofRandom(150, 255), ofRandom(150, 255), ofRandom(150, 255));
        ofDrawCircle(pos[i], size[i]);
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
    
    
    for (int i = 0; i < 500; i++) {
        // draw the circles around the mouse position and map to the canvas
        float distance = ofDist(pos[i].x, pos[i].y, x, y);
        size[i] = ofMap(distance, 0, 400, 100, 0);
    }
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
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
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
