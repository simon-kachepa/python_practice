# Write a program to find the product of a set of real numbers
count = int(input("Enter the count of integers: "))
product = 1
for i in range(count):
    number = int(input(f"Enter number {i + 1}: "))
    product *= number
print(f"The product is {product}: ")