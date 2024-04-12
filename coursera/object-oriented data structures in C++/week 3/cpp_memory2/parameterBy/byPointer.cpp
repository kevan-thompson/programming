/**********************************************************
Filename:   main.cpp
Author:     Kevan Thompson
Date:       April 10, 2024
Description:A test program to show paramaters by pointer
**********************************************************/

#include <iostream>
#include "../cube.h"
using std::cout;
using std::endl;
using uiuc::Cube;

bool sendCube(Cube *c){

    //Send the Cube somewhere
    return true;
}

int main(){
    //This should invoke the single arguement constructor
    Cube c(10);

    sendCube(&c);
    
    return 0;
}
