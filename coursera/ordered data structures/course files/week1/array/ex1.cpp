/**********************************************************
Filename:   ex1.cpp
Author:     Kevan Thompson
Date:       Jan 6, 2025
Description: A simple program showing how to use an array
**********************************************************/

#include <iostream>

using std::cout;
using std::endl;

int main(){

    //Create a fixed sized array 
    int values [9] = {2,3,5,7,11,13,15,17,23};
    
    //output the 4th value
    cout << values[3] << endl;
    //Should print out 7
 
    return 0;
}
