#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	putin.load("putin-time.png");
	trump.load("trump-time.png");
    average.allocate(600, 800, OF_IMAGE_COLOR);

}

//--------------------------------------------------------------
void ofApp::update(){
    //dynamic calculation of average image

    for (int i = 0; i < 600; i++) {
        for (int j = 0; j < 800; j++) {

            // (1) sum:
            ofColor colorPutin = putin.getColor(i, j);
            ofColor colorTrump = trump.getColor(i, j);
            float mixRed = ofMap(sin(ofGetElapsedTimef()*0.4), -1, 1, colorPutin.r, colorTrump.r);
            float mixGreen = ofMap(sin(ofGetElapsedTimef() * 0.4), -1, 1, colorPutin.g, colorTrump.g);
            float mixBlue = ofMap(sin(ofGetElapsedTimef() * 0.4), -1, 1, colorPutin.b, colorTrump.b);

            average.setColor(i, j, ofColor(mixRed, mixGreen, mixBlue));

        }
    }

    average.update();

}

//--------------------------------------------------------------
void ofApp::draw(){
    average.draw(0, 0);
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
