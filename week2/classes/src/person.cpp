//
//  person.cpp
//  classes
//
//  Created by  Christine on 2/3/16.
//
//

#include "person.hpp"
#include "ofMain.h"

void person::eat(){
    cout<<"I'm eating!"<<endl;
}

void person::sleep(){
    cout<<"I'm sleeping!"<<endl;
    ofEllipse(ofGetWidth()/2, ofGetHeight()/2, 100,20);

}

void person::hello(){
    cout<<"hello, my name is" << name << endl;
    
}

void person::talk(){
    
}

void person::lie(){
    
}

void person::shower(){
    
}

void person::fart(){
    
}
