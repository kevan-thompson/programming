/**********************************************************
Filename:   main.cpp
Author:     Kevan Thompson
Date:       April 3, 2024
Description:A test program to show the new operator  
**********************************************************/

#include <iostream>
using std::cout;
using std::endl;

int main(){
    
    //new operator allocates memory for the variable. By default
    //this is added to the heap
    int *numPtr = new int;

    //The integer numPtr is pointing to hasn't been 
    //initalized yet. So this will just be whatever is
    //already in that memory location
    cout << "*numPtr: " << *numPtr << endl;
    cout << "numPtr: " << numPtr << endl;
    cout << "&numPtr: " << &numPtr << endl;
    
    *numPtr = 42;
    
    cout << "*numPtr has been assigned 42" << endl;
    cout << "*numPtr: " << *numPtr << endl;
    cout << "numPtr: " << numPtr << endl;
    cout << "&numPtr: " << &numPtr << endl;    
    
    return 0;
}
