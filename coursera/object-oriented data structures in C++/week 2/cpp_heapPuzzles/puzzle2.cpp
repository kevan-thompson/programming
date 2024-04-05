/**********************************************************
Filename:   puzzle2.cpp
Author:     Kevan Thompson
Date:       April 4, 2024
Description:A test program to play with pointers and
            reference variables
**********************************************************/

#include <iostream>
using std::cout;
using std::endl;

int main(){

    int *x = new int;
    //This is a reference variable. It will alias x
    int &y = *x;
    y = 4;
    
    cout << &x << endl;
    cout << x << endl;
    cout << *x << endl;
    
    //Should be same as x
    cout << &y << endl;
    //Should be same as *x
    cout << y << endl;
    //Don't uncomment this line. You can not dereference
    //a non pointer variable! It will cause a 
    //compiler error
    //cout << *x << endl; 
    
    return 0;

}   
    
    
