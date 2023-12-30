# Question: WAP using the for loop to find the factorial of a user entered number

number = int(input("Enter a number: "))
factorial = 1
for i in range(number, 0, -1):
    factorial *= i
print(f"The factorial of {number} is {factorial}")