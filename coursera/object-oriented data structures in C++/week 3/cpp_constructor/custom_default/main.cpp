/**********************************************************
Filename:   main.cpp
Author:     Kevan Thompson
Date:       April 3, 2024
Description:A test program to test the custom default 
            constructor
**********************************************************/

#include <iostream>
#include "cube.h"
using std::cout;
using std::endl;

int main(){
    
    uiuc :: Cube c;
    
    cout << "Volume: " << c.getVolume() << endl;  
    cout << "Surface Area: " << c.getSurfaceArea() << endl; 
    
    return 0;
}
