/**********************************************************
Filename:   heap2.cpp
Author:     Kevan Thompson
Date:       April 3, 2024
Description:A test program to show what happend when 2 
            pointers point to the same object, and you
            delete both
**********************************************************/

#include <iostream>
#include "cube.h"
using std::cout;
using std::endl;
using uiuc::Cube;

int main(){
    
    Cube *c1 = new Cube;
    Cube *c2 = c1;
    
    c2->setLength(7);
    cout << "Surface Area: " <<  c1->getSurfaceArea() << endl;
    cout << "Volume: " <<  c1->getVolume() << endl;
    
    //This seems like a bad idea!
    //They both point to the same object. So...
    //From console:
    //free(): double free detected in tcache 2
    //Aborted (core dumped)
    delete c2;
    delete c1;

    return 0;
}
