#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    float r = ofMap(sin(ofGetElapsedTimef() * 0.3), -1, 1, 0, 255);
    float g = ofMap(sin(ofGetElapsedTimef() * 0.5), -1, 1, 0, 255);
    float b = ofMap(sin(ofGetElapsedTimef() * 0.7), -1, 1, 0, 255);
    ofSetBackgroundColor(0);
    ofSetColor(r,g,b);
    ofNoFill();

    float time = ofGetElapsedTimef();

    for (int k = 0; k < 4; k++) { //Draw 4 groups of hexagons
        for (int j = 0; j < 6; j++) { //Each group has 6 hexagons
            float radius_hex = ofMap(j, 0, 5, 10, 100); //Each hexagon has a different radius
            float x_loc = 400 + 250 * cos(time + ofMap(sin(ofGetElapsedTimef() * 0.4), -1, 1, 0, PI) * (j + 1) + k * PI / 2); //Each hexagon moves at a different speed
            float y_loc = 400 + 250 * sin(time + ofMap(sin(ofGetElapsedTimef() * 0.4), -1, 1, 0, PI) * (j + 1) + k * PI / 2); //idem
            ofBeginShape(); //Begin drawing one hexagon centered at (x_loc, y_loc)
            for (int i = 0; i < 6; i++) {
                float angle_hex = ofMap(i, 0, 6, 0, TWO_PI);
                ofPoint pos;
                pos.x = x_loc + radius_hex * cos(angle_hex + PI / 6);
                pos.y = y_loc + radius_hex * sin(angle_hex + PI / 6);
                ofVertex(pos);
            }
            ofEndShape(true);
        }
    }
    /*
    ofNoFill();
    for (int k = 0; k < 4; k++){ //Draw 4 groups of hexagons
        for (int j = 0; j < 6; j++) { //Each group has 6 hexagons
            float radius_hex = ofMap(j, 0, 5, 10, 100); //Each hexagon has a different radius
            float x_loc = 400 + 250 * cos(ofMap(sin(ofGetElapsedTimef()*0.4),-1,1,0,PI) * (j+1) + k*PI/2); //Each hexagon moves at a different speed
            float y_loc = 400 + 250 * sin(ofMap(sin(ofGetElapsedTimef()*0.4),-1,1,0,PI) * (j+1) + k*PI/2); //idem
            ofBeginShape(); //Begin drawing one hexagon centered at (x_loc, y_loc)
            for (int i = 0; i < 6; i++) {
                float angle_hex = ofMap(i, 0, 6, 0, TWO_PI);
                ofPoint pos;
                pos.x = x_loc + radius_hex * cos(angle_hex + PI / 6);
                pos.y = y_loc + radius_hex * sin(angle_hex + PI / 6);
                ofVertex(pos);
            }
            ofEndShape(true);
        }
    }
    */

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
