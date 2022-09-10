"""
Filename:       built_in_collections.py
Author:         Kevan Thompson
Date:           September 9, 2022

Description: 

"""

def minmax(items):
    """
    Description:    Finds the minmum and maximum value in a 
                    collection of objects
    Paramaters:     items - a collection of objects
    Return:         A tuple containing (lower_value, upper_value)
    """
    return min(items),max(items)


def main():
    """
    Description:    Main program for testing. 
    Paramaters:     None 
    Return:         None
    """

    ############################################################################
    #Tuple Examples
    ############################################################################
    
    collection = [83,115,2001,913,1,0,59,96,53]
    
    #Tuple unpacking
    lower, upper = minmax(collection)
    
    #These kind of strings are called f-strings
    print(f"""From the collection {collection} the Lowest value is: {lower}, 
and the highest value is {upper}""") 
    
    #An Easy way to swap two variables
    #use a tuple and unpack it
    lower, upper = upper, lower
    
    print("Let's try a quick swap")
    print(f"""From the collection {collection} the Lowest value is: {lower}, 
and the highest value is {upper}""") 
    
    #Minmax takes an collection so try a string 
    s = "Pneumonoultramicroscopicsilicovolcanoconiosis"
    
    lower, upper = minmax(s)
    print("We can minmax a string too!")
    print(f"""From the collection {s} the Lowest value is: {lower}, 
and the highest value is {upper}""") 


    ############################################################################
    #String Examples
    ############################################################################
    
if __name__ == '__main__':
    main()