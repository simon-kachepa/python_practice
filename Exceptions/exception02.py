try:
    x = int(input("Enter a number: "))
    
except ValueError:
    print("x entered is not a number")
    
print(f"x entered is {x}")