#include "ofApp.h"

/*-------------------------------------------------------------
 [ofCourse] Lecture-1-Graphics
 example_4_loop
 
 * Using loops and mouse coordinates to draw an interactive pattern
    a) Simple loop
    b) Nested loop
 
 * More color:
    * ofColor
    * setHsb()
    * ofBackgroundGradient()
--------------------------------------------------------------*/

//--------------------------------------------------------------
void ofApp::setup(){
    spacing = 20;
    rectSize = 10;
}

//--------------------------------------------------------------
void ofApp::update(){
//    // For more interactions, play with these two:
//    spacing = mouseY/10;
//    rectSize = mouseX/20;
}

//--------------------------------------------------------------
void ofApp::draw(){

    // Gradient Background
    ofColor color1, color2;
    color1.set(0, 240, 120);
    color2.set(0, 120, 240);
    ofBackgroundGradient(color1, color2, OF_GRADIENT_LINEAR);
    //    // Also try: OF_GRADIENT_BAR and OF_GRADIENT_CIRCULAR
    
    
//    // 1. Simple loop
//    for(int x = 0; x < mouseX; x += spacing){
//        ofColor rectColor;
//        rectColor.setHsb(x*255/ofGetWidth(), 255, 255);
//        ofSetColor(rectColor);
//        ofRect(x, 0, rectSize, rectSize);
//    }

    // 2. Nested loop!
    for(int x = 0; x < mouseX; x += spacing){
        for(int y = 0; y < mouseY; y += spacing){
            ofColor rectColor;
            rectColor.setHsb(x*255/ofGetWidth(), y*255/ofGetHeight(), 255);
            ofSetColor(rectColor);
            ofRect(x, y, rectSize, rectSize);
        }
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
