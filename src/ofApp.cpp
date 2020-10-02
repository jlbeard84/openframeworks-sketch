#include "ofApp.h"

ofMesh quad;
ofShader shader;
ofImage img;

//--------------------------------------------------------------
void ofApp::setup(){
    quad.addVertex(glm::vec3(-1.0f, -1.0f, 0.0f));
    quad.addVertex(glm::vec3(-1.0f, 1.0f, 0.0f));
    quad.addVertex(glm::vec3(1.0f, 1.0f, 0.0f));
    quad.addVertex(glm::vec3(1.0f, -1.0f, 0.0f));
    
    quad.addTexCoord(glm::vec2(0, 0));
    quad.addTexCoord(glm::vec2(0, 1));
    quad.addTexCoord(glm::vec2(1, 1));
    quad.addTexCoord(glm::vec2(1, 0));
    
    ofIndexType indices[6] = { 0, 1, 2, 2, 3, 0 };
    quad.addIndices(indices, 6);
    
    ofDisableArbTex();
    img.load("parrot.png");
    img.getTexture().setTextureWrap(GL_REPEAT, GL_REPEAT);
    
    shader.load("scrolling_uv.vert", "texture.frag");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    shader.begin();
    shader.setUniformTexture("parrotTex", img, 0);
    shader.setUniform1f("time", ofGetElapsedTimef() / 2);
    quad.draw();
    shader.end();
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
