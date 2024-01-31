def main():
    x = get_int()
    print(f"x is {x}")




def get_int():
    while True:
        try:
            return int(input("Enter a number: "))
        
        except ValueError:
            print("x entered is not a number")

if __name__== "__main__":
    main()