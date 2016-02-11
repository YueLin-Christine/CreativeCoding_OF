//
//  Meow.cpp
//  hw_classes
//
//  Created by  Christine on 2/8/16.
//
//

#include "Meow.hpp"
#include "ofMain.h"

Meow::Meow(){
    posX = ofGetWindowWidth() * 0.5;
    posY = ofGetWindowHeight() * 0.5;
}

void Meow::body(){
    //line1
    ofDrawLine(posX-60, posY, posX-30, posY-120);
    //line2
    ofDrawLine(posX-30, posY-120, posX-15, posY-100);
    //line3
    ofDrawLine(posX-15, posY-100, posX+15, posY-100);
    //Line4
    ofDrawLine(posX+15, posY-100, posX+30, posY-120);
    //Line5
    ofDrawLine(posX+30, posY-120, posX+60, posY);
    
}
//what if I want to use center.x,and center.y to replace posX, and posY?


void Meow::eye(){
    //lefteye
    ofDrawEllipse(posX-18, posY-82, 5, 5);
    //righteye
    ofDrawEllipse(posX+18, posY-82, 5, 5);
//    ofSetColor(255);
}

void Meow::mouth(){
//    ofRectangle(posX, posY-60, 4, 4);
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofDrawRectangle(posX, posY-68, 4, 4);
    
}

void Meow::talk(){
    cout<<"Meow,meow,meeeeeeeeeow"<<endl;
    
}

void Meow::blink(){
    ofDrawLine(posX-20, posY-82, posX-14, posY-82);
    ofDrawLine(posX+14, posY-82, posX+20, posY-82);
    
}

void Meow::fart(){
    ofDrawEllipse(posX+90, posY-30, 40, 40);
    
}
