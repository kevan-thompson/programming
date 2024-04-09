/**********************************************************
Filename:   main.cpp
Author:     Kevan Thompson
Date:       April 8, 2024
Description:A test program to test the custom default 
            constructors
**********************************************************/

#include <iostream>
#include "cube.h"
using std::cout;
using std::endl;

int main(){
    
    uiuc :: Cube c1;
    uiuc :: Cube c2(2);
    
    cout << "Volume c1: " << c1.getVolume() << endl;  
    cout << "Surface Area c1: " << c1.getSurfaceArea() << endl; 
    
    cout << "Volume c2: " << c2.getVolume() << endl;  
    cout << "Surface Area c2: " << c2.getSurfaceArea() << endl; 
    
    return 0;
}
