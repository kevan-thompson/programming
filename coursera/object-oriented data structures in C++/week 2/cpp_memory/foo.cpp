/**********************************************************
Filename:   foo.cpp
Author:     Kevan Thompson
Date:       April 3, 2024
Description:A test program that prints out the address for
            variables in main and a function foo to show 
            how those variables are added to the Stack
**********************************************************/

#include <iostream>
using std::cout;
using std::endl;

/**********************************************************
Descrption: This function just prints out the value and
            address of a variable called x
Paramters:  None
Returns:    None
**********************************************************/
void foo(){
    int x = 42;
    cout << "x in foo is: " << x << endl;
    cout << "&x in foo is: " << &x << endl;
}

int main(){
    int num = 7;
    cout << "num in main(): " << num << endl;
    cout << "&num in main(): " << &num << endl;
    
    foo();
    
    return 0;
}
