#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {

    grabber.listDevices();
    grabber.setDeviceID(0);
    grabber.setup(640,480);

}

//--------------------------------------------------------------
void ofApp::update() {
    grabber.update(); //Update frame from webcam

    ofBuffer buffer;
    ofSaveImage(grabber.getPixels(), buffer, OF_IMAGE_FORMAT_JPEG, OF_IMAGE_QUALITY_BEST); //Get pixels from webcam frame then save to buffer as JPG

    ofSeedRandom(0);

    int whereToSkip = ofMap(ofNoise(sin(ofGetElapsedTimef()) * 0.3), 0, 1, 0, buffer.size(), true);

    int left = buffer.size() - whereToSkip;
    int howMuchToSkip = ofMap(ofRandom(0, 100), 0, 100, 0, left * 0.8, true);
    ofBuffer buffer2;
    for (int i = 0; i < buffer.size(); i++) {
        if (i < whereToSkip ||
            i >(whereToSkip + howMuchToSkip)) {
            buffer2.append(buffer.getData() + i, 1);
        }
        else {
            char* data = new char[1];
            data[0] = ofRandom(0, 255);
            buffer2.append(data, 1);
            delete data;

        }
    }

    if (ofRandom(10) < 3)
        newImage.load(buffer2);
    else
        newImage.load(buffer);



}

//--------------------------------------------------------------
void ofApp::draw() {

    newImage.draw(0, 0);

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
