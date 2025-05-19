
def main():
    """
        Integer (int): Whole numbers (e.g., 10, -5, 0).
        Float (float): Decimal numbers (e.g., 3.14, -0.5, 2.0).
        String (str): Sequences of characters (e.g., "hello", 'world', "123").
        Boolean (bool): Represents truth values (True or False).
        List (list): Ordered, mutable (changeable) sequences of items (e.g., [1, 2, 'apple']).
        Tuple (tuple): Ordered, immutable (unchangeable) sequences of items (e.g., (1, 2, 'apple')).
        Dictionary (dict): Unordered collections of key-value pairs (e.g., {'name': 'Alice', 'age': 30}).
        Set (set): Unordered collections of unique elements (e.g., {1, 2, 3}).
    """
    #Integer
    age = 27
    print(type(age))

    #Float
    marks = 23.08
    print(type(marks))
    
    #String
    name = "Lijo Joseph"
    print(type(name))

    #Boolean
    isGood = True
    print(type(isGood))

    #List
    fruits = ["apple", "bananas", "mango"]
    print(type(fruits))

    #Tuple
    numbers = (8, 9, 4, 3, 7, 5, 7, 9, 4, 6)
    print(type(numbers))

    #Dictionary
    details = {'name': 'Lijo', 'job': 'Computer Science Engineer'}
    print(type(details))

    #Set
    numbers_unique = {8, 9, 4, 3, 7, 5, 7, 9, 4, 6}
    print(type(numbers_unique))

if __name__ == "__main__":
    main()

