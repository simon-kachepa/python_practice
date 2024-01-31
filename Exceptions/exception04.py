while True:
    try:
        x = int(input("Enter a number: "))
    
    except ValueError:
        print("x entered is not a number")
    
    else:
        break

print(f"x entered is {x}")