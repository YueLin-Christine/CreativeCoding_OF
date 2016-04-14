//
//  CustomCircle.hpp
//  pendelum
//
//  Created by  Christine on 4/10/16.
//
//

#ifndef CustomCircle_hpp
#define CustomCircle_hpp

#include <stdio.h>
#include "ofMain.h"

class CustomCircle {
public:
    CustomCircle();
    
    void setup();
    void draw();
    void interpolateByPct(float myPct);
    
    ofPoint posA, posB, pos;
    float pct;
//    float catchUpSpeed;
    
};

#endif /* CustomCircle_hpp */
