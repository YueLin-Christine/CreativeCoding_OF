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
    CustomCircle();
    void setup(ofVec2f _initPos);
    void update(ofVec2f _mouse);
    void draw();
    
private:
    ofVec2f currentPos;
    float pct;
};

#endif /* CustomCircle_hpp */
