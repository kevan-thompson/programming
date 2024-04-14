/**********************************************************
Filename:   main.cpp
Author:     Kevan Thompson
Date:       April 13, 2024
Description:A test program to show custom destructors   
**********************************************************/

#include <iostream>
#include "cube.h"

//Imports cout and endl from std namespace into global 
//namespace
using std::cout;
using std::endl;
using uiuc::Cube;

double cube_on_stack(){
    //Single arguement constructor invoked
    Cube c(3);
    //custom destructor invoked
    return c.getVolume();
}

void cube_on_heap(){
    //single arguement constructor invoked
    Cube * c1 = new Cube(10);
    //custom default constructor invoked
    Cube * c2 = new Cube;
    //custom destructor invoked
    delete c1;
    
    //Note: No destructor invoked for c2. Destructor
    //is only invoked when stack variables leave scope
    //and not for heap variables. 
}


int main(){

    cube_on_stack();
    cube_on_heap();
    cube_on_stack();
    
    //expect  3 single arg constructors
    //        1 custom default
    //        3 destructors 
    
    return 0;
    
}
