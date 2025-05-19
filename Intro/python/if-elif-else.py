def main():
    age = 20
    if age >= 18:
        print("You are an adult")
    else:
        print("You are a minor")

    conditional()

    return 1

def conditional():
    grade = 85
    if grade >= 90:
        print("A")
    elif grade >= 80:
        print("B")
    elif grade >= 70:
        print("C")
    else:
        print("D")

if __name__ == "__main__":
    main()
