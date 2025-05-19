# python does not have a switch statment by default
# instead python is having match-case
# match subject:
#     case pattern_1:
#         # Code to execute if subject matches pattern_1
#     case pattern_2:
#         # Code to execute if subject matches pattern_2
#     case _:
#         # Optional: Default case if no other pattern matches
#
def main():
    status_code = 404

    match status_code:
        case 200:
            print("OK")
        case 400:
            print("Not Found")
        case 500:
            print("Internal Server Error")
        case _:
            print(f"Unknown status code: {status_code}")


if __name__ == "__main__":
    main()
