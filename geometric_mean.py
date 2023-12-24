count = int(input("Enter the number of intergers: "))
product = 1
i = 0
while (i < count):
    number = int(input(f"Enter number {i+1}: "))
    product *= number
    i += 1
geometric_mean = product ** (1/count)
print(f"The geometric mean is: {geometric_mean:.3f}")
