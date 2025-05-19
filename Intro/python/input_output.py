# taking input and output from a user


def main():
    return age_test()

def name():
    name = input("Enter your name: ")
    print("your name is: ", name)

def age_test():
    age_str = input("Enter your age: ")
    age = int(age_str)
    print("Your age is: ", age)

if __name__ == "__main__":
    main()

