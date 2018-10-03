#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {

	ofSetFrameRate(60);
	ofSetWindowTitle("openframeworks");

	ofBackground(39);
	
	this->image.load("images/lenna.jpg");
	this->pixels = this->image.getPixels();
}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {

	int step = ofMap(ofGetMouseX(), 0, ofGetWidth(), 5, 30);
	for (int x = 0; x < this->pixels.getWidth(); x += step) {

		for (int y = 0; y < this->pixels.getHeight(); y += step) {
			 
			ofColor color = this->pixels.getColor(x, y);
			ofSetColor(color);
			ofDrawRectangle(x, y, step, step);
		}
	}
}

//--------------------------------------------------------------
int main() {

	ofSetupOpenGL(720, 720, OF_WINDOW);
	ofRunApp(new ofApp());
}