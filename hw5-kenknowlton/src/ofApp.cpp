#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	img_putin.load("putin.jpg");
    img_hitler.load("hitler.png");
	img_bomb_l.load("bomb_w_20.png");
    img_bomb_m.load("bomb_w_15.png");
    img_bomb_s.load("bomb_w_10.png");
    ofEnableBlendMode(OF_BLENDMODE_ADD);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
    ofSetLineWidth(2);

    for (int i = 0; i < img_putin.getWidth(); i += 10) {
        for (int j = 0; j < img_putin.getHeight(); j += 10) {
            ofColor color_putin = img_putin.getColor(i, j);
            float brightness_putin = color_putin.getBrightness();
            ofColor color_hitler = img_hitler.getColor(i, j);
            float brightness_hitler = color_hitler.getBrightness();

            float brightness = ofMap(sin(ofGetElapsedTimef()*0.4), -1, 1, brightness_putin, brightness_hitler);


            ofPushMatrix();
            ofTranslate(i, j);
            ofRotateZDeg(ofMap(brightness, 0, 255, 0, ofMap(sin(ofGetElapsedTimef() * 0.7), -1, 1, 90, 450)));
            if (brightness == 0) {
                //nothing
            } else if (brightness < 100) {
                img_bomb_s.draw(2, 2);
                }
                else if (brightness < 230) {
                    img_bomb_m.draw(0, 0);
                }
                else {
                    img_bomb_l.draw(-2, -2);
                }

            //ofDrawLine(0 - 5, 0, 0 + 5, 0);
            ofPopMatrix();
            
        }
    }
    ofSetColor(255);

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
