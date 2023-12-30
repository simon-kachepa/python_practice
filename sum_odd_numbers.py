#Question: WAP using the while loop to find the sum and average of all odd integers 1, 3, 5, 7, ..., 499
number = 1
sum = count = 0
while number <= 499:
    sum += number
    count += 1
    number += 2
average = sum / count
print(f"The sum is: {sum}")
print(f"The average is {average}")