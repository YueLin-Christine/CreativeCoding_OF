#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    scully.setup(ofGetWidth()/2, ofGetHeight()/2);
    booBoo.setup(100,100);

}

//--------------------------------------------------------------
void ofApp::update(){
    scully.update();
    booBoo.update();
    
    for(int i=0; i < myAliens.size(); i++){
        myAliens[i].update();{
            
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    scully.draw();
    booBoo.draw();
    
    for(int i=0; i<myAliens.size(); i++){
        //.size always know how big the size is
        myAliens[i].draw();
        
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
    Alien tempAlien;//declare temperory object
    tempAlien.setup(x, y);// pass the x and y through it;
    myAliens.push_back(tempAlien);//push tempAlien, takes whatever you created, put them into your vector. the last position of your vector. //store the tempAline into an array.

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
//    myAliens.clear(); //.clear clear the vector
    
    
    for(int i = 0; i < myAliens.size();i++){
        
        float distance = ofDist(x,y, myAliens[i].xPos, myAliens[i].yPos); //calculate the distance between mouse and the center of the alien
        if(distance < myAliens[i].diam){
            myAliens.erase(myAliens.begin()+i);
        }
        
    }

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
