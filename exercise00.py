weight = float(input("Weight: "))

units = input("(K)gs or (L)bs: ")

if units == 'K' or units == 'k':
    print("Weight in Kgs is: " + str(weight))
elif units == 'L' or units == 'l':
    weight *= 0.454
    print("Weight in Kgs is: " + str(weight))
else:
    print("Invalid units")