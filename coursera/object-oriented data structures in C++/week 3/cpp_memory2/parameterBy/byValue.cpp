/**********************************************************
Filename:   main.cpp
Author:     Kevan Thompson
Date:       April 11, 2024
Description:A test program to show assignement by value
**********************************************************/

#include <iostream>
#include "../cube.h"
using std::cout;
using std::endl;
using uiuc::Cube;

bool sendCube(Cube C){
    //Send the Cube somewhere
    return true;
}


int main(){
    //This should invoke the single arguement constructor
    Cube c(10);
    //Send the cube to someone
    //Should call the copy constructor
    sendCube(c);
    
    return 0;
}
