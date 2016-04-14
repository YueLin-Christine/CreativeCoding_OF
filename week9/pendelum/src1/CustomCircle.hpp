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
    void setup(float _posX, float _posY);
    void update();
    void draw();
    
private:
    float posX, posY;
    float speed;
    float amplitude;
    float sine;
    
};

#endif /* CustomCircle_hpp */
