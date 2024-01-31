# Uses of the underscore in python
# 1. It is used by the python interpreter as a variable to store the last value or expression in the interpreter

# 2. It is used to ignore some values
a, _, b = (5, 9, 15)
#The values 5 and 15 have been assigned to a and b respectively and the value 9 has been assisgned to (_) in order to ignore it


# 3. The underscore (_) can also be used the same as usual variables
for _ in range(10):
    print(_)

# 4. It is used to seperate digits of a number for better readability
million = 1_000_000
print(million)

# 5. 