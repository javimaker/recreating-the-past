#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {

    font.load("Univers-light-normal.ttf", 40, true, true, true);
}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {

    ofBackground(255, 255, 224);

    //    vector < ofPath > paths = font.getStringAsPoints("hello");
    //    ofTranslate(200,200);
    //    for (int i = 0; i < paths.size(); i++){
    //        paths[i].draw();
    //    }

    //ofEnableDepthTest();

    //cam.enableOrtho();

        ofSetColor(0);
        ofPushMatrix();
            ofTranslate(100, 70);
            ofPushMatrix();
                for (int j = 0; j < 19; j++) {
                    vector < ofPath > paths = font.getStringAsPoints("MULTIPLEINTERACTION");
                    for (int i = 0; i < paths.size(); i++) {
                        paths[i].draw();
                    }
                    ofTranslate(0, 50);
                }
            ofPopMatrix();
            ofPushMatrix();
                ofTranslate(250 + ofMap(sin(ofGetElapsedTimef()),-1,1,0,20), 0);
                for (int j = 0; j < 19; j++) {
                    vector < ofPath > paths = font.getStringAsPoints("INTERACTION");
                    for (int i = 0; i < paths.size(); i++) {
                        paths[i].draw();
                    }
                    ofTranslate(0, 50);
                }
            ofPopMatrix();
         ofPopMatrix();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
