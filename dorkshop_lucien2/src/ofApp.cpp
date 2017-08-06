#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    // set canvas background color
    ofBackground(255, 255, 255);
    
    size = 50;
    friction = 0.9;
}

//--------------------------------------------------------------
void ofApp::update(){
    pos += vel;
    vel += acc;
    
    if (pos.x < (0 + size) || pos.x > (ofGetWindowWidth() - size)) {
        vel.x *= -1;
    }
    
    if (pos.y < (0 + size) || pos.y > (ofGetWindowHeight() - size)) {
        vel.y *= -1;
        vel.y *= friction;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(255, 0, 0);
    ofSetCircleResolution(50);
    ofDrawCircle(pos, size);
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
    pos = ofVec2f(x, y);
    vel = ofVec2f(ofRandom(-5, 5), ofRandom(-5, 0));
    acc = ofVec2f(ofRandom(0, 0.2));
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
