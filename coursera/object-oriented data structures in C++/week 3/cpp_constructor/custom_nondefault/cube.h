/**********************************************************
Filename:   cube.h
Author:     Kevan Thompson
Date:       April 8, 2024
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
            //Note You can have more than one constructor
            
            //Note the no return value or parameters 
            //and has the same name as the class
            Cube(); //custom default constructor
            //Note the one arguement
            Cube(double length); //one arguement constructor
            //Note: Adding any constructor removed the 
            //automatic default constructor
            
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
