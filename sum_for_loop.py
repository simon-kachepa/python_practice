n = int(input("Enter the value of n: "))
sum = 0
for number in range(1, n+1):
    sum += number
print(f"Sum of first {n} natural numbers is: {sum}")