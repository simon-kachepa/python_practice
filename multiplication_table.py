# Question: WAP that takes a number as input and prints its multiplication table up to 10

number = int(input("Enter a number: "))
for i in range(1, 11):
    print(f"{number} * {i} = {number * i}")