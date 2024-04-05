/**********************************************************
Filename:   puzzle4.cpp
Author:     Kevan Thompson
Date:       April 4, 2024
Description:A test program to show how to allocate and 
            deallocate memory for arrays 
**********************************************************/

#include <iostream>
using std::cout;
using std::endl;

int main(){

    int *x;
    int size = 3;
    //This will allocate memory for a new int array of 
    //size 3
    x = new int[size];
    
    for(int i = 0; i < size; i++){
        x[i] = i + 3;
        cout << x[i] << endl;
    }
    
    //This is used to delete an array
    delete[] x;
    
}
