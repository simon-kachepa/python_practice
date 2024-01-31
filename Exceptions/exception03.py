try:
    x = int(input("Enter a number: "))
    
except ValueError:
    print("x entered is not a number")
    
else:
    print(f"x entered is {x}")