#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofEnableSmoothing();
    ofBackground(255);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofPoint mouse(mouseX,mouseY);
    ofPoint center(ofGetWidth()/2,ofGetHeight()/2);
    mouse -= center;
    
    // Multiplying a vector!  The vector is now half its original size (multiplied by 0.5).
    mouse *= 0.5;
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofSetLineWidth(2);
    ofSetColor(0);
    ofLine(0, 0, mouse.x, mouse.y);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){ }
//--------------------------------------------------------------
void ofApp::keyReleased(int key){ }
//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){ }
//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){ }
//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){ }
//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){ }
//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){ }
//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){ }
//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ }
