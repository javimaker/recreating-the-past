#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofEnableSmoothing();
    ofDisableAlphaBlending();
	ofSetCircleResolution(100);
    ofSetBackgroundColor(242, 236, 233);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
        int radius = 28;
        int separation = 60;
        int totalRings = 8;
        float currentTime = ofGetElapsedTimef();

        ofPushMatrix();
        //Translate to middle of 1024x1024 canvas
        ofTranslate(512, 512);

        //We have 8 concentrical rings
        for (int ring = 0; ring < totalRings; ring++) {

            if (ring == 0) {   //Exception for center circles
                //Draw big background circle
                ofSetColor(0);
                ofDrawCircle(0, 0, radius + (totalRings - 1) * separation);
                //Draw center circle
                ofSetColor(102, 255, 92);
                ofDrawCircle(0, 0, radius);
                //Draw shading for center circle
                ofPushMatrix();
                ofRotate(ofGetFrameNum());
                ofSetColor(0, 0, 0, 140);
                drawCircleShading(radius);
                ofPopMatrix();
            }
            else { //Rest of rings
                //We need to draw increasing number of circles in 6x increments
                int circlesInRing = ring * 6;
                int ringRadius = ring * separation; //Each ring has increasing radius
                //We also need to set the color for each ring
                switch (ring) {
                case 1:
                    ofSetColor(114, 136, 253);
                    break;
                case 2:
                    ofSetColor(43, 66, 193);
                    break;
                case 3:
                    ofSetColor(74, 61, 97);
                    break;
                case 4:
                    ofSetColor(255, 93, 76);
                    break;
                case 5:
                    ofSetColor(254, 117, 92);
                    break;
                case 6:
                    ofSetColor(255, 189, 74);
                    break;
                case 7:
                    ofSetColor(249, 255, 94);
                    break;
                }
                //Now we draw each circle in the ring
                for (int circ = 0; circ < circlesInRing; circ++) {
                    float angle = ofMap(circ, 0, circlesInRing, -PI, PI);
                    angle += cos(currentTime * 0.1 * ring);
                    float circleX = ringRadius * cos(angle);
                    float circleY = ringRadius * sin(angle);
                    ofDrawCircle(circleX, circleY, radius);
                }
                //And then we draw the inner shading
                for (int circ = 0; circ < circlesInRing; circ++) {
                    float angle = ofMap(circ, 0, circlesInRing, -PI, PI);
                    angle += cos(currentTime * 0.1 * ring);
                    float circleX = ringRadius * cos(angle);
                    float circleY = ringRadius * sin(angle);

                    //Following code is adapted from Zach Lieberman's example
                    ofPushMatrix();
                    ofTranslate(circleX, circleY);
                    ofRotate(ofRandom(360));
                    ofSetColor(0, 0, 0, 140);
                    drawCircleShading(radius);
                    ofPopMatrix();
                }
            }
        }
        ofPopMatrix();

    


    /*  
	ofPushMatrix();
		ofTranslate(mouseX, mouseY);
		int x = 0;
		int y = 0;
		//ofDrawCircle(x, y, radius);
		int lineCount = 50;
		for (int i = 0; i < lineCount; i++) {
            float pct = ofMap(i, 0, lineCount - 1, 0, 1);
            // now we are going to shape the pcts; 
            if (pct < 0.5) {
                float newAmt = pct * 2;
                newAmt = pow(newAmt, 1. / 3.0);
                pct = newAmt / 2.0;
            }
            else {
                float newAmt = ofMap(pct, 0.5, 1, 1, 0);
                newAmt = pow(newAmt, 1. / 3.0);
                pct = ofMap(newAmt, 0, 1, 1, 0.5);
            }

            float angle = ofMap(pct, 0, 1, -PI / 2, PI / 2);
            float angle2 = PI / 2 + (PI / 2 - angle);
            float ptAx = x + radius * cos(angle);
            float ptAy = y + radius * sin(angle);
            float ptBx = x + radius * cos(angle2);
            float ptBy = y + radius * sin(angle2);
            ofDrawLine(ptAx, ptAy, ptBx, ptBy);
		}
	ofPopMatrix();
    */
}

//--------------------------------------------------------------
void ofApp::drawCircleShading(int radius) {
    int x = 0;
    int y = 0;
    int lineCount = 30; //Number of lines in shading
    for (int i = 0; i < lineCount; i++) {
        float pct = ofMap(i, 0, lineCount - 1, 0, 1);
        // now we are going to shape the pcts; 
        if (pct < 0.5) {
            float newAmt = pct * 2;
            newAmt = pow(newAmt, 1. / 3.0);
            pct = newAmt / 2.0;
        }
        else {
            float newAmt = ofMap(pct, 0.5, 1, 1, 0);
            newAmt = pow(newAmt, 1. / 3.0);
            pct = ofMap(newAmt, 0, 1, 1, 0.5);
        }

        float angle1 = ofMap(pct, 0, 1, -PI / 2, PI / 2);
        float angle2 = PI / 2 + (PI / 2 - angle1);
        float ptAx = x + radius * cos(angle1);
        float ptAy = y + radius * sin(angle1);
        float ptBx = x + radius * cos(angle2);
        float ptBy = y + radius * sin(angle2);
        ofDrawLine(ptAx, ptAy, ptBx, ptBy);
    }
    return;
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
