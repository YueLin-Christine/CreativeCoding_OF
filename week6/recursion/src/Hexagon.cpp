//
//  Hexagon.cpp
//  recursion
//
//  Created by  Christine on 3/12/16.
//
//

#include "Hexagon.hpp"

//void Hexagon::setup(){
//    centerX = ofGetWidth()/2;
//    centerY = ofGetHeight()/2;
//    radius = 100/2;
//
//}

Hexagon::Hexagon(){
    centerX = 0;
    centerY = 0;
    radius = 180;
    r = 255;
    g = 255;
    b = 255;
}

void Hexagon::drawHexagon(float centerX, float centerY, float radius){
    ofDrawLine(centerX, centerY+2*radius, centerX+sqrt(3)*radius, centerY+1*radius);
    ofDrawLine(centerX+sqrt(3)*radius, centerY+1*radius, centerX+sqrt(3)*radius, centerY-1*radius);
    ofDrawLine(centerX+sqrt(3)*radius, centerY-1*radius, centerX, centerY-2*radius);
    ofDrawLine(centerX, centerY-2*radius, centerX-sqrt(3)*radius, centerY-1*radius);
    ofDrawLine(centerX-sqrt(3)*radius, centerY-1*radius, centerX-sqrt(3)*radius, centerY+1*radius);
    ofDrawLine(centerX-sqrt(3)*radius, centerY+1*radius, centerX, centerY+2*radius);
    
}

void Hexagon::drawRotation(float radius, float theta){
    drawHexagon(centerX, centerY, radius);
    ofTranslate(0, 0);
    radius = radius * 0.87;
    if(radius > 1){
        ofPushMatrix();
        ofRotate(theta);
        drawRotation(radius, theta);
        ofPopMatrix();
    }
}

//void Hexagon::drawBranch(float centerX, float centerY){
//    drawRotation(radius, theta);
//    ofTranslate(0, 0);
//    
//    if(centerX < ofGetWidth()){
//        ofPushMatrix();
//        drawBranch(centerX+100, centerY+100);
//        ofPopMatrix();
//    }
//    
//}

void Hexagon::draw(){
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofSetColor(255*(sin(ofGetElapsedTimef())+0.5), 255*(cos(ofGetElapsedTimef())-0.5), b);
    drawRotation(radius,(sin(ofGetElapsedTimef())+1)*60);
//    drawBranch(centerX, centerY, radius, r, g, b, (ofGetElapsedTimef())*60);
//    drawBranch(0, 0);

}


