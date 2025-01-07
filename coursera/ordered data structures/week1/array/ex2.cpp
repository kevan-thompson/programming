/**********************************************************
Filename:   ex2.cpp
Author:     Kevan Thompson
Date:       Jan 6, 2025
Description: A simple program showing that an array's 
            memory is allocated contiguously
**********************************************************/

#include <iostream>

using std::cout;
using std::endl;

int main(){
    
    //Create a fixed sized array 
    int value [9] = {2,3,5,7,11,13,15,17,23};

    //Print the size of an int
    cout << sizeof(int) << endl;
    //Should print 4
    
    //Using pointer arithmetic calculate the offset from
    //the beginnning of the array to [2]
    int offset = (long)&(value[2]) - (long)&(value[0]);
    cout << offset << endl; 
    //Should print 8. (2 * 4)
    

    return 0;
}
