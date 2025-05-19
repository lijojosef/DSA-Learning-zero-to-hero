def main():
    count = 0
    while count < 5:
        print("count is: ", count)
        count += 1

    while True:
        user_input = input("Enter 'quit' to exit: ")
        if user_input.lower() == 'quit':
            break
        else:
            print("You entered: ", user_input)

if __name__ == "__main__":
    main()
