/**********************************************************
Filename:   cube.h
Author:     Kevan Thompson
Date:       April 15, 2024
Description:Header file for a the cube class. This class
            provides some simple functions about a cube
            based on it's length.   
**********************************************************/

#pragma once
#include "HSLAPixel.h"

namespace uiuc {
    //<Class keyword> <Class name> {
    class Cube{
        //Public Members
        public:
            Cube(); //custom default constructor
            Cube(double length, HSLAPixel colour); //one arguement constructor
            //Cube(const Cube & obj); //custom copy constuctor 
            //Cube & operator=(const Cube & obj); //custom assignment operator
            //~Cube(); //Custom Destructor
            double getVolume() const;
            double getSurfaceArea() const;
            
            double getLength() const;
            void setLength(double length);
            
            
        //Private members
        private:
            double length_;
            HSLAPixel colour_;   
    };//end Cube
}//end uiuc
