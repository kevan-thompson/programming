/**********************************************************
Filename:   ex3.cpp
Author:     Kevan Thompson
Date:       Jan 6, 2025
Description: A simple program showing resizing of a vector
            and how to search an array for a value
**********************************************************/

#include <iostream>
#include <vector>

using std::cout;
using std::endl;

int main(){
    
    std::vector<int> ints{11,42,400};
    
    cout << "Initial capacity: " << ints.capacity() << endl;
    //Should print 3
    
    ints.push_back(800);
    //Size is the number of elements in the vector, 
    //Capacity is the maximum number of elements that can
    //be added before a resize.
    cout << "Size after adding: " << ints.size() << endl;
    //Should print 4
    cout << "Capacity after adding: " << ints.capacity() << endl;
    //Should print 6
    
    
    //Using pointer arithmetic calculate the offset from
    //the beginnning of the array to [2]
    int offset = (long)&(ints[2]) - (long)&(ints[0]);
    cout << "Memory Seperation: " << offset << endl; 
    //Should print 8
    
    //Find a specific 'target' int in array
    int target = 400;
    
    for (unsigned i = 0; i < ints.size(); i++){
        if(target == ints[i]){
            cout << "Found target at [" << i << "]" << endl;
         }
    }

    return 0;
}
