//
//  Hexagon.hpp
//  recursion
//
//  Created by  Christine on 3/12/16.
//
//

#ifndef Hexagon_hpp
#define Hexagon_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* Hexagon_hpp */
class Hexagon{
    
public:
  
    void drawHexagon(float centerX, float centerY, float radius);
    void drawGrid(float centerX, float centerY, float radius, int r, int g, int b);
    void drawBranch();
    void draw();

    float centerX, centerY;
    float radius;
    float theta;
    int r;
    int g;
    int b;
    
    Hexagon();    
    

    
};
