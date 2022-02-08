#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofEnableAlphaBlending();
    ofBackground(235); //white-ish bg
    ofSetColor(15, 15, 15, 240); //black-ish color with a bit of transparency

    ofSetRectMode(OF_RECTMODE_CENTER); //set rectangle mode to center

    ofTranslate(100, 0); //Bring drawing towards center

    ofSeedRandom();

    for(int i=0; i<2; i++){
        float y = ofMap(i, 0, 1, 250, 550);
        for (int j = 0; j < 33; j++) {
            float x = ofMap(j, 0, 32, 50, 950);
            float y_off = ofMap(ofNoise(j * 0.37 + i), 0, 1, -90, 90);
            ofPushMatrix();
            ofTranslate(0, y_off);
            ofDrawRectangle(x, y, 25, 260);
            ofPopMatrix();
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
