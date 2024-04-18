/**********************************************************
Filename:   cube.cpp
Author:     Kevan Thompson
Date:       April 17, 2024
Description:Header file for a the cube class. This class
            provides some simple functions about a cube
            based on it's length.   
**********************************************************/
#include <iostream>
#include "cube.h"
#include "HSLAPixel.h"

using std::cout;
using std::endl;


namespace uiuc {

    /**********************************************************
    Descrption: Custom default constructor. Length = 1
    Paramters:  None
    Returns:    None
    **********************************************************/
    Cube::Cube(){
        length_ = 1;
        colour_ = HSLAPixel::BLUE;
        //Comment out after testing
        //cout << "Default constuctor invoked" << endl;
    }
    /**********************************************************
    Descrption: Custom constructor. With one arguement
    Paramters:  Initial length, a double. Initial colour,
                HSLAPixel
    Returns:    None
    **********************************************************/
    Cube::Cube(double length, HSLAPixel colour){
        length_ = length;
        colour_ = colour;
        //cout << "Single arguement constuctor invoked" << endl;
    }

    /**********************************************************
    Descrption: Custom copy constructor. 
    Paramters:  obj, a reference variable of type Cube to be
                copied
    Returns:    None
    **********************************************************/
    /*
    Cube::Cube(const Cube & obj){
        length_ = obj.length_;
        //Comment out after testing
        cout << "Copy constuctor invoked" << endl;
    }     
    */
    /**********************************************************
    Descrption: Custom assignment operator. 
    Paramters:  obj, a reference variable of type Cube to be
                copied
    Returns:    None
    **********************************************************/
    /*
    Cube & Cube::operator=(const Cube & obj){
        length_ = obj.length_;
        //Comment out after testing
        cout << "Assignment operator invoked" << endl;
        return *this;
    }
    */
    /**********************************************************
    Descrption: Custom destructor. 
    Paramters:  None
    Returns:    None
    **********************************************************/
    /*
    Cube::~Cube(){
        //Comment out after testing
        cout << "Custom Destructor Invoked" << endl;
    }
    */

    
    /**********************************************************
    Descrption: Calculates the volume of the cube
    Paramters:  None
    Returns:    The volume of the cube as a double
    **********************************************************/
    double Cube::getVolume() const{
        return length_ * length_ * length_;
    }

    /**********************************************************
    Descrption: Calculates the surface area of the cube
    Paramters:  None
    Returns:    The surface area of the cube as double
    **********************************************************/
    double Cube::getSurfaceArea() const{
        return 6 * (length_ * length_);
    }

    /**********************************************************
    Descrption: Getter function to get the length of the cube
    Paramters:  None
    Returns:    The length of the cube as a double
    **********************************************************/
    double Cube::getLength() const{
        return length_;
    }

    /**********************************************************
    Descrption: Setter function to set the length of the cube
    Paramters:  The new length of the cube as a double
    Returns:    none
    **********************************************************/
    void Cube::setLength(double length){
        length_ = length;
    }
}//end uiuc
