/**********************************************************
Filename:   puzzle.cpp
Author:     Kevan Thompson
Date:       April 3, 2024
Description:A test program that shows stack memory is 
            released when a function ends. So you can't
            use a pointer to variable declared in a 
            function, in the caller function. 
**********************************************************/

#include <iostream>
#include "cube.h"
using std::cout;
using std::endl;
using uiuc::Cube;

/**********************************************************
Descrption: This function creates an object of the cube
            class, and initialized it's length to 15
Paramters:  None
Returns:    Cube * - a pointer to an object of cube class 
**********************************************************/
Cube *createUnitCube(){
    Cube cube;
    cube.setLength(15);
    //Never return a reference to a local variable!!
    return &cube;
} 

int main(){

    double a;
    double v;
    Cube *c = createUnitCube();
    //This will cause something bad to happen
    //For me it was a segfault. 
    a = c->getSurfaceArea();
    v = c->getVolume();
    
    return 0;

}
