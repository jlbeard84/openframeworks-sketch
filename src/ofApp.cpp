#include "ofApp.h"

ofMesh triangle;
ofShader shader;
glm::vec4 triangleColor;
int currentColor;

//--------------------------------------------------------------
void ofApp::setup(){
    triangle.addVertex(glm::vec3(-1.0f, 1.0f, 0.0f));
    triangle.addVertex(glm::vec3(-1.0f, -1.0f, 0.0f));
    triangle.addVertex(glm::vec3(1.0f, -1.0f, 0.0f));
    
    triangle.addColor(ofFloatColor(1.0f, 0.0f, 0.0f, 1.0f));
    triangle.addColor(ofFloatColor(0.0f, 1.0f, 0.0f, 1.0f));
    triangle.addColor(ofFloatColor(0.0f, 0.0f, 1.0f, 1.0f));
    
    currentColor = 1;
    setCurrentColorVector();
    
    shader.load("first_vertex.vert", "first_fragment.frag");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    shader.begin();
    shader.setUniform4f("fragmentColor", triangleColor);
    triangle.draw();
    shader.end();
}

void ofApp::setCurrentColorVector()
{
    float red = 0.0f;
    float green = 0.0f;
    float blue = 0.0f;
    
    switch (currentColor) {
        case 1:
            red = 1.0f;
            break;
        case 2:
            green = 1.0f;
            break;
        case 3:
            blue = 1.0f;
            break;
        default:
            break;
    }
    
    triangleColor = glm::vec4(red, green, blue, 1.0f);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    currentColor++;
    if (currentColor > 3)
    {
        currentColor = 1;
    }
    
    setCurrentColorVector();
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
