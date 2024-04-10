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

Cube foo( ){
    //This should invoke the default constructor
    Cube c;
    //This should invoke the copy constructor
    return c;
}

int main(){
    //This should invoke the copy constructor
    Cube c2 = foo();
    
    return 0;
}
