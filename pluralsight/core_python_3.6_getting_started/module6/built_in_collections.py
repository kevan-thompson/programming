"""
Filename:       built_in_collections.py
Author:         Kevan Thompson
Date:           September 9, 2022

Description: 

"""

def minMax(items):
    """
    Description:    Finds the minmum and maximum value in a 
                    collection of objects
    Paramaters:     items - a collection of objects
    Return:         A tuple containing (lower_value, upper_value)
    """
    return min(items),max(items)

    
def printCapitals (capitals):
    """
    Description:    Take in a list of provinces and capitals and prints them
    Paramaters:     A list of provinces and capitals in a string 
                    "province:capital"
    Return:         none
    """
    
    for item in capitals:
        #Unwritten convention the _ is used to dummy or unused variables
        province,_,capital = item.partition(':')
        print(f"The capital of {province} is {capital}")

def main():
    """
    Description:    Main program for testing. 
    Paramaters:     None 
    Return:         None
    """

    print("******************************************************************")
    print("Staring Main Program for Module 6")
    print("******************************************************************")
    
    ############################################################################
    #Tuple Examples
    ############################################################################
    
    print("--------------------------------------")
    print("Tuple Examples:")
    print("--------------------------------------")
    print(" ")
    
    #Tuples are an immutable sequence of arbitrary objects
    
    collection = [83,115,2001,913,1,0,59,96,53]
    
    #Tuple unpacking
    lower, upper = minMax(collection)
    
    #These kind of strings are called f-strings
    print(f"""\nFrom the collection {collection} the Lowest value is: {lower}, 
and the highest value is {upper} \n\n""") 
    
    #An Easy way to swap two variables
    #use a tuple and unpack it
    lower, upper = upper, lower
    
    print("Let's try a quick swap")
    print(f"""From the collection {collection} the Lowest value is: {lower}, 
and the highest value is {upper}\n\n""") 
    
    #Minmax takes an collection so try a string 
    s = "Pneumonoultramicroscopicsilicovolcanoconiosis"
    
    lower, upper = minMax(s)
    print("We can minmax a string too!")
    print(f"""From the collection {s} the Lowest value is: {lower}, 
and the highest value is {upper}\n\n""") 


    ############################################################################
    #String Examples
    ############################################################################
    
    print("--------------------------------------")
    print("String Examples:")
    print("--------------------------------------")
    print(" ")
    
    s1 = "Warhammer"
    s2 = '40K'
    
    #Concatenation
    print(f"We have two strings {s1} and {s2}")
    s3 = s1 + ' ' + s2
    print(f"We can concatenate them with: + {s3}")
    s4 = ' '.join([s1,s2])
    print(f"or with .join: {s4}")
    print("Join is the better option. The + operator is less efficient and creates temporaries\n")
    
    #Partition
    capitals = ["AB:Edmonton","BC:Victoria","MB:Winnipeg","NB:Fredericton",
                "NL:St Johns", "NS:Halifax","On:Toronto", "PE:Charlottetown", 
                "QC:Quebec City", "SK:Regina"]
    
    printCapitals(capitals)
    
    ############################################################################
    #Range Examples
    ############################################################################
    
    #A sequence representing an arithmetic progression of integers
    
    """
    range(stop_value) - assumes 0 for startswith
    range(state_value, stop_value)
    range(start_value, stop_value, increment_value)
    """
    
    print("--------------------------------------")
    print("Range Example:")
    print("--------------------------------------")
    print(" ")
    
    for i in range(5):
        print(i)
    
    for i in range(0,5):
        print(i)
    
    for i in range(0,5,2):
        print(i)
    
    #If you need an index value pair don't use range, use enumerate
    
    #Enumerate - Constructs an iterable of (idex, value) tuple around another
    #iterable object
    
    print("Use enumerate for index value pairs!")
    t = [6,372, 88, 148, 209]
    
    for i in enumerate(t):
        print(i)

    ############################################################################
    #List Examples
    ############################################################################
    
    #A sequence representing an arithmetic progression of integers
       
    print("--------------------------------------")
    print("List Example:")
    print("--------------------------------------")
    print(" ")
    
    l = [1,2,86,54,27,9,2001]
    
    print(f"Original list is {l}")
    print(f"The last item in the list is {l[-1]}") #-1 Also works for tuples and strings
    print(f"There are two ways to print to from 1 to the end of the list. This: {l[1:-1]}") 
    print(f"Or this: {l[1:]}")
    print(f"You can print the whole list like this: {l[:]}")
        
        
        
if __name__ == '__main__':
    main()