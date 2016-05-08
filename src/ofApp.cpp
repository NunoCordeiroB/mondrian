#include "ofApp.h"

int c1, c2, c3, c4, c5, c6, c7;

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0, 0, 0);
    
    c1 = ofRandom(0, 4);
    c2 = ofRandom(0, 4);
    c3 = ofRandom(0, 4);
    c4 = ofRandom(0, 4);
    c5 = ofRandom(0, 4);
    c6 = ofRandom(0, 4);
    c7 = ofRandom(0, 4);
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

void mySetColor(int c) {
    if (c == 0) // vermelho
        ofSetColor(230, 0, 10);
    else if (c == 1) // azul
        ofSetColor(10, 0, 255);
    else if (c == 2) // amarelo
        ofSetColor(255, 255, 0);
    else if (c == 3) // branco
        ofSetColor(255, 255, 255);
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    mySetColor(c1);
    ofDrawRectangle(0, 0, 100, 160);
    
    mySetColor(c2);
    ofDrawRectangle(110, 0, 690, 270);
    
    mySetColor(c3);
    ofDrawRectangle(0, 170, 100, 100);
    
    mySetColor(c4);
    ofDrawRectangle(0, 280, 100, 230);
    
    mySetColor(c5);
    ofDrawRectangle(110, 280, 440, 230);
    
    mySetColor(c6);
    ofDrawRectangle(560, 280, 550, 110);
    
    mySetColor(c7);
    ofDrawRectangle(560, 400, 550, 100);
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    cout << key << endl;
    if (key == 32){
    c1 = ofRandom(0, 4);
    c2 = ofRandom(0, 4);
    c3 = ofRandom(0, 4);
    c4 = ofRandom(0, 4);
    c5 = ofRandom(0, 4);
    c6 = ofRandom(0, 4);
    c7 = ofRandom(0, 4);}
    
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
