/**********************************************************
Filename:   heap1.cpp
Author:     Kevan Thompson
Date:       April 3, 2024
Description:A test program to show the delete operator, 
            and the nullptr  
**********************************************************/

#include <iostream>
#include "cube.h"
using std::cout;
using std::endl;
using uiuc::Cube;

int main(){
    
    int *numPtr = new int;
    Cube *c = new Cube;
    
    *numPtr = 42;
    c->setLength(7);
    //This is the same as (*c).setLength(7);

    cout << "*numPtr: " << *numPtr << endl;
    cout << "Surface Area: " <<  c->getSurfaceArea() << endl;
    cout << "Volume: " <<  c->getVolume() << endl;

    //Deallocate memory for C
    delete c;
    //Assign c the special nullptr. Aka a pointer to no 
    //where. Will throw a segfault if attempted to acess.
    c = nullptr;
    delete numPtr;
    numPtr = nullptr;
    
    return 0;
}
