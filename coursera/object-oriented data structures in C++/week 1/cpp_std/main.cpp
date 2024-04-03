/**********************************************************
Filename:   main.cpp
Author:     Kevan Thompson
Date:       April 2, 2024
Description:A test program for the cube class.   
**********************************************************/

#include <iostream>
#include "cube.h"

//Imports cout and endl from std namespace into global 
//namespace
using std::cout;
using std::endl;

int main(){

    uiuc::Cube c;
    double volume;
    double surfaceArea;
    
    c.setLength(2.0);
    volume = c.getVolume();
    surfaceArea = c.getSurfaceArea();
    
    cout << "Cube Length: " << c.getLength() << endl;
    cout << "Cube Volume: " << volume << endl;
    cout << "Cube Surface Area: " << surfaceArea << endl;
    
    return 0;
    
}
