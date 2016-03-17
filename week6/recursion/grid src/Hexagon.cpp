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
    centerX = -320;
    centerY = 20;
    radius = 30;
//    theta = sin(ofGetElapsedTimef()*80);
    r = 255;
    g = 255;
    b = 255;
    
}

void Hexagon::drawHexagon(float centerX, float centerY, float radius){
    ofDrawLine(centerX-sqrt(3)*radius, centerY+1*radius, centerX, centerY+2*radius);
    ofDrawLine(centerX, centerY+2*radius, centerX+sqrt(3)*radius, centerY+1*radius);
    ofDrawLine(centerX+sqrt(3)*radius, centerY+1*radius, centerX+sqrt(3)*radius, centerY-1*radius);
    ofDrawLine(centerX+sqrt(3)*radius, centerY-1*radius, centerX, centerY-2*radius);
    ofDrawLine(centerX, centerY-2*radius, centerX-sqrt(3)*radius, centerY-1*radius);
    ofDrawLine(centerX-sqrt(3)*radius, centerY-1*radius, centerX-sqrt(3)*radius, centerY+1*radius);
//    ofRotate(theta);
    
}

void Hexagon::drawGrid(float centerX, float centerY, float radius, int r, int g, int b){
    drawHexagon(centerX, centerY, radius);
    ofSetColor(r, g, b);
    
    if(centerX < ofGetWidth()){
        drawGrid(centerX+2*sqrt(3) * radius, centerY, radius, r, g, b);
    }
    if(centerY < ofGetHeight()){
        drawGrid(centerX+sqrt(3) * radius, centerY+3*radius, radius, r, g, b);
    }
}

void Hexagon::draw(){
   drawGrid(centerX, centerY, radius, r, g, b);
}


