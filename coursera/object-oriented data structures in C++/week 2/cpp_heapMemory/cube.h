/**********************************************************
Filename:   cube.h
Author:     Kevan Thompson
Date:       April 2, 2024
Description:Header file for a the cube class. This class
            provides some simple functions about a cube
            based on it's length.   
**********************************************************/

//This tells the compiler to only compile the file once
//Should be in each header file
#pragma once

//Create a namespace called uiuc. Namespaces are used
//to avoid conflicts between common function and
//variable names
namespace uiuc {
    //<Class keyword> <Class name> {
    class Cube{
        //Public Members
        public:
            double getVolume();
            double getSurfaceArea();
            double getLength();
            void setLength(double length);
        //Private members
        private:
            //It is a convention that private members end with
            //an underscore
            double length_;
    //Note the semicolon        
    };//end Cube
}//end uiuc
