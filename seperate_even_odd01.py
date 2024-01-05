my_list = list(range(1, 25))
even_numbers = []
odd_numbers = []
for number in my_list:
    if number % 2 == 0:
        even_numbers.append(number)
    else:
        odd_numbers.append(number)
print("List of {}: ".format(even_numbers))
print("List of {}: ".format(odd_numbers))