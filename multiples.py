# Question: Using any looping construct, WAP that prints all numbers from 0 to 100 except the multiples of 7

for number in range(101):
    if number % 7 == 0:
        continue
    print(number)