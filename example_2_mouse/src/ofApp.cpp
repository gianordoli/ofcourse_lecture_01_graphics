#include "ofApp.h"

/*-------------------------------------------------------------
 [ofCourse] Lecture-1-Graphics
            example_2_mouse
 
 * Different ways of using mouse coordinates
    1. mouseX and mouseY variables
    2. passing coords from mouse event to global variables
        a) mouseDragged
        b) mouseReleased
 
 * Playing with ofSetBackgroundAuto();
--------------------------------------------------------------*/

//--------------------------------------------------------------
void ofApp::setup(){
//    ofSetBackgroundAuto(false);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
//    // 2. passing coords from mouse event to global variables
//    ofBackground(bgX, bgY, 0);
    
    // 1. mouseX and mouseY variables
    ofSetColor(0, 230, 180, 50);
    ofCircle(mouseX, mouseY, 80);
    
    // 2. passing coords from mouse event to global variables
    ofSetColor(230, 0, 180, 100);
    ofRect(0, 0, rectWidth, rectHeight);
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
    rectWidth = x;
    rectHeight = y;
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    bgX = x;
    bgY = y;
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
