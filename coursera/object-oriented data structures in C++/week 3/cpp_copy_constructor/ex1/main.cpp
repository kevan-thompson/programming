/**********************************************************
Filename:   main.cpp
Author:     Kevan Thompson
Date:       April 9, 2024
Description:A test program to show when the custom default 
            and copy constructors are called
**********************************************************/

#include <iostream>
#include "../cube.h"
using std::cout;
using std::endl;
using uiuc::Cube;

void foo(Cube cube){
    //Do nothing
}

int main(){
    
    //This should invoke the default constructor
    Cube c;
    //This should invoke the copy constructor
    foo(c);
    
    return 0;
}
