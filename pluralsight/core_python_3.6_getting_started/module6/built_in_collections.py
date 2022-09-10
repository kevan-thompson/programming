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
    """
    
    for item in capitals:
        province,_,capital = item.partition(':')
        print(f"The capital of {province} is {capital}")

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
    
    s1 = "Warhammer"
    s2 = '40K'
    
    #Concatenation
    print(f"We have two strings {s1} and {s2}")
    s3 = s1 + ' ' + s2
    print(f"We can concatenate them with: + {s3}")
    s4 = ' '.join([s1,s2])
    print(f"or with .join: {s4}")
    print("Join is the better option. The + operator is less efficient and creates temporaries")
    
    #Partition
    capitals = ["AB:Edmonton","BC:Victoria","MB:Winnipeg","NB:Fredericton",
                "NL:St Johns", "NS:Halifax","On:Toronto", "PE:Charlottetown", 
                "QC:Quebec City", "SK:Regina"]
    
    printCapitals(capitals)
    
if __name__ == '__main__':
    main()