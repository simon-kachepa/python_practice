# Question: WAP that prints a number in reverse order starting from a number entered by the user up to 0 with difference of 2.

number = int(input("Enter a starting number: "))
for i in range(number,0,-2):
    print(i)