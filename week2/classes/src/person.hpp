//
//  person.hpp
//  classes
//
//  Created by  Christine on 2/3/16.
//
//

#ifndef person_hpp
#define person_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* person_hpp */

class person{
public:
    //properties
    string name;
    int age;
    string personality;
    string gender;
    Boolean alive;
    
    //methods
    void eat();
    void hello();
    void sleep();
    void talk();
    void lie();
    void shower();
    void fart();
};
