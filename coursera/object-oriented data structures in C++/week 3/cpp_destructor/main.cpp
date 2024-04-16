/**********************************************************
Filename:   main.cpp
Author:     Kevan Thompson
Date:       April 13, 2024
Description:A test program to show custom destructors   
**********************************************************/

#include <iostream>
#include "cube.h"

using std::cout;
using std::endl;
using uiuc::Cube;

double cube_on_stack(){
    //Single arguement constructor invoked
    Cube c(3);
    //Custom destructor invoked
    return c.getVolume();
}

void cube_on_heap(){
    //Single arguement constructor invoked
    Cube * c1 = new Cube(10);
    //Custom default constructor invoked
    Cube * c2 = new Cube;
    //Custom destructor invoked
    delete c1;
    
    //Note: No destructor invoked for c2. Destructor
    //is only invoked at end of functions when stack 
    //variables leave scope and not for heap variables. 
    //Heap variables are only destoryed with delete. 
}


int main(){

    cube_on_stack();
    cube_on_heap();
    cube_on_stack();
    
    //expect  3 Single arg constructors
    //        1 Custom default
    //        3 Destructors 
    
    return 0;
    
}
