/**********************************************************
Filename:   main.cpp
Author:     Kevan Thompson
Date:       April 10, 2024
Description:A test program to show assignement by reference
**********************************************************/

#include <iostream>
#include "../cube.h"
using std::cout;
using std::endl;
using uiuc::Cube;

int main(){
    //This should invoke the single arguement constructor
    Cube c(10);

    Cube & myCube = c;
    
    return 0;
}
