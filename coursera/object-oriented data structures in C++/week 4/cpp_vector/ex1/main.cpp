/**********************************************************
Filename:   main.cpp
Author:     Kevan Thompson
Date:       April 13, 2024
Description: A test program to show how the std type vector   
             works. Vector is a template type. A template
             type can take on different types when 
             initialize. 
             
             A vector is similar to an array. It can be 
             indexed using the [] operator. A vector can
             grow dynamically using the method push_back.
             
**********************************************************/

#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main(){

    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(8);
    
    cout << v[0] << endl;
    cout << v[1] << endl;
    cout << v[2] << endl;
    cout << v.size() << endl;
    //Expect 2,3,8,3 to print out
    
    
    return 0;
}

