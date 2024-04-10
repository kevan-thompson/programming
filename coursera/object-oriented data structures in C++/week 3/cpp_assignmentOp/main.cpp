/**********************************************************
Filename:   main.cpp
Author:     Kevan Thompson
Date:       April 10, 2024
Description:A test program to show when the custom assignment 
            operator
**********************************************************/

#include <iostream>
#include "cube.h"
using std::cout;
using std::endl;
using uiuc::Cube;

int main(){
    //This should invoke the default constructor
    Cube c;
    //This should invoke the default constructor
    Cube myCube;
    
    //This should invoke the assignment operator
    myCube = c;
    
    return 0;
}
