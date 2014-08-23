#include "ofApp.h"

/*-------------------------------------------------------------
 [ofCourse] Lecture-1-Graphics
            example_3_animation

 * Using global variables to make simple animations
 * Adding conditionals
 * Introducing app properties:
    * ofSetWindowTitle(), ofSetWindowShape()
    * ofEnableAntiAliasing(), ofSetCircleResolution()
    * ofGetWidth(), ofGetHeight()
--------------------------------------------------------------*/

//--------------------------------------------------------------
void ofApp::setup(){
    // Window Title
    ofSetWindowTitle("[ofCourse] Basics: Animation");

    // Window size
    ofSetWindowShape(1333, 768);
    
//    //Both these options work for fullscreen
//    ofToggleFullscreen();
//    ofSetFullscreen(true);

    ofEnableAntiAliasing();
    ofSetCircleResolution(3);
    
    circleX = 0;
    circleY = 0;

}

//--------------------------------------------------------------
void ofApp::update(){
    circleX += 2;
    circleY += 1;

    // Uncomment this part to make the circle come back!
    if(circleX > ofGetWidth()){
        circleX = 0;
    }
    if(circleY > ofGetHeight()){
        circleY = 0;
    }
    
    //Uncomment this part to make the rect follow the mouse
    if(rectX < mouseX){
        rectX += 2;
    }else if (rectX > mouseX){
        rectX -= 2;
    }
    
    if(rectY < mouseY){
        rectY += 2;
    }else if (rectY > mouseY){
        rectY -= 2;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0, 230, 180);
    
    ofSetColor(ofColor::salmon);
    ofCircle(circleX, circleY, 100);
    
    ofSetColor(ofColor::orange);
    ofRect(rectX, rectY, 50, 50);
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
