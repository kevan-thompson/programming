/**********************************************************
Filename:   main.cpp
Author:     Kevan Thompson
Date:       April 13, 2024
Description: Another test program to show how the std type  
             vector works.              
**********************************************************/

#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main(){

    vector<int> v;

    for(int i = 0; i < 100; i++){
        v.push_back(i * i);
    }
    
    cout << v[1] << endl;
    cout << v[12] << endl;
    cout << v[99] << endl;
    cout << v.size() << endl;
    //Expect 1,144,9801,100
    
    return 0;
}

