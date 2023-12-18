# *args - allow functions to take variadic number of arguments and packs them into a tuple

def addNumbers(*args):
    sum = 0
    for number in args:
        sum += number
    print(f"The sum is: {sum}")

addNumbers(5, 7, 10, 65)