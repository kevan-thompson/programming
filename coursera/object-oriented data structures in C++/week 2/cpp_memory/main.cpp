/**********************************************************
Filename:   main.cpp
Author:     Kevan Thompson
Date:       April 3, 2024
Description:A test program to show some pointer examples. 
 
**********************************************************/

#include <iostream>
using std::cout;
using std::endl;

int main(){
    int num = 7;
    int *p;
    cout << "num: " << num << endl;
    cout << "&num: " << &num << endl;
    
    p = &num;
    
    cout << "p: " << p << endl;
    cout << "*p: " << *p << endl;
    cout << "&p: " << &p << endl;
    
    *p = 42;
    cout << "p changed to 42 " << endl;
    cout << "num: " << num << endl;
    
    return 0;
    
    
}
