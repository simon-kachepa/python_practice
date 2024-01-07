# Question: WAP that accepts user input and print the fibonacci series up to the number inputted by the user

number = int(input("Enter a number: "))

a, b, sum = 0, 1, 0
for i in range(number):
    print(a, end=', ')
    sum += a
    a, b = b, a + b
print("")
print(f"The sum is: {sum}")