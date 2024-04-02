/**********************************************************
Filename:   main.cpp
Author:     Kevan Thompson
Date:       April 1, 2024
Description:A test program for the cube class.   
**********************************************************/

#include <iostream>
#include "cube.h"


int main(){

    Cube c;
    double volume;
    double surfaceArea;
    
    c.setLength(3.47);
    volume = c.getVolume();
    surfaceArea = c.getSurfaceArea();
    
    std::cout << "Cube Length: " << c.getLength() << std::endl;
    std::cout << "Cube Volume: " << volume << std::endl;
    std::cout << "Cube Surface Area: " << surfaceArea << std::endl;
    
    return 0;
    
}
