try:
    x = int(input("Enter a number: "))
    print(f"x entered is {x}")
except ValueError:
    print("x entered is not a number")
    