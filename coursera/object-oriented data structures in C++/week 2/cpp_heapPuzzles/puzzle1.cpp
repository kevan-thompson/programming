/**********************************************************
Filename:   puzzle1.cpp
Author:     Kevan Thompson
Date:       April 4, 2024
Description:A test program to play with pointers. 
**********************************************************/

#include <iostream>
using std::cout;
using std::endl;

int main(){

    int i = 2;
    int j = 4;
    int k = 8;
    
    int *p = &i;
    int *q = &j;
    int *r = &k;
    
    k = i;
    
    //Expect  242242
    cout << i << j << k << *p << *q << *r << endl;
    
    p = q;
    
    //Expect  242442
    cout << i << j << k << *p << *q << *r << endl;
    
    *q = *r;
    
    //Expect  222222
    cout << i << j << k << *p << *q << *r << endl;
 
    return 0;
        
}
