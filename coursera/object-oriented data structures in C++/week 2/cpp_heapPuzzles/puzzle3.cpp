/**********************************************************
Filename:   puzzle3.cpp
Author:     Kevan Thompson
Date:       April 4, 2024
Description:A test program to play with pointers 
**********************************************************/

#include <iostream>
using std::cout;
using std::endl;

int main(){

    int *p;
    int *q;
    
    p = new int;
    q = p;
    *q = 8;
    
    //Should be 8
    cout << *p << endl;
    
    q = new int;
    *q = 9;
    
    //Should be 8
    cout << *p << endl;
    //Should be 9
    cout << *q << endl;
    
    return 0;

}   
    
    
