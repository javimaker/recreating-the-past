#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(214, 188, 158);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	int matrix_orange[6][12] =
	{ {0, 1, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1},
	  {1, 0, 1, 1, 0, 1, 1, 0, 1, 0, 1, 1},
	  {1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0},
	  {0, 1, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1},
	  {1, 0, 1, 1, 0, 1, 1, 0, 1, 0, 1, 1},
	  {1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0} };

	int matrix_grey[6][12] =
	{ {0,1,0,0,1,0,0,1,0,1,0,0},
	  {0,0,1,0,0,0,1,0,0,0,0,1},
	  {1,0,0,1,0,1,0,0,0,0,1,0},
	  {0,0,1,0,0,0,1,0,1,0,0,1},
	  {1,0,0,1,0,1,0,0,0,0,1,0},
	  {0,1,0,0,1,0,0,1,0,1,0,0} };

	int matrix_black[6][12] =
	{ {0,0,0,0,0,0,0,0,0,0,0,0},
	  {0,1,0,0,1,0,0,1,0,1,0,0},
	  {0,0,0,0,0,0,0,0,0,0,0,0},
	  {1,0,0,1,0,1,0,0,0,0,1,0},
	  {0,0,0,0,0,0,0,0,0,0,0,0},
	  {0,0,1,0,0,0,1,0,1,0,0,1} };


	for (int r_ny = 0; r_ny < 6; r_ny++) {                   //create grid of rectangles
		for (int r_nx = 0; r_nx < 12; r_nx++) {
			int r_x_corner = ofMap(r_nx, 0, 12, 0, 720); //rectangles are 60x200, mapping top left corner
			int r_y_corner = ofMap(r_ny, 0, 6, 0, 1200); //idem

			//Orange rectangles
			if (matrix_orange[r_ny][r_nx] == 1) {
				ofSetColor(213, 69, 34);
				for (int i_o = 0; i_o < 12; i_o++) {
					if (i_o % 2 == 1) {
						ofDrawRectangle(r_x_corner, r_y_corner + i_o * 200 / 12, 60, 200 / 12);
					}
				} //Grey overlays on top of orange rectangles
				if (matrix_grey[r_ny][r_nx] == 1) {
					ofSetColor(0, 0, 0, 140);
					ofDrawRectangle(r_x_corner, r_y_corner, 60, 200);
				}
			}
			else if (matrix_black[r_ny][r_nx] == 1) { //Black rectangles
				ofSetColor(0, 0, 0);
				ofDrawRectangle(r_x_corner, r_y_corner, 60, 200);
			}

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
