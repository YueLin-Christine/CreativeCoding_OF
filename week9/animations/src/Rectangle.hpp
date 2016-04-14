//
//  Rectangle.hpp
//  animations
//
//  Created by  Christine on 4/6/16.
//
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* Rectangle_hpp */

class Rectangle{
public:
    //constructor
    Rectangle();

    //methods
    void draw();
    void interpolateByPct(float myPct);
    void zenoToPoint(float catchX, float catchY);
    
    //params
    ofPoint posA, posB, pos;
    float pct;
    float catchUpSpeed;
};