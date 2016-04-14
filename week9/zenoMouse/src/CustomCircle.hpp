//
//  CustomCircle.hpp
//  zenoMouse
//
//  Created by  Christine on 4/10/16.
//
//

#ifndef CustomCircle_hpp
#define CustomCircle_hpp

#include <stdio.h>
#include "ofMain.h"

class CustomCircle{
public:
    //constructor
    CustomCircle();
    
    //methods
    void setup();
    void update();
    void draw();
    void interpolateByPct(float myPct);
    
    //parameters
    ofPoint posA, posB, pos;
    float pct;
    
    //zeno
    void zenoToPoint(float catchX, float catchY);
    float catchUpSpeed;
    
};

#endif /* CustomCircle_hpp */
