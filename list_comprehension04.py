
# my_list = []
# for i in range(1, 10):
#     square = i ** 2
#     if square % 2 == 0:
#         my_list.append(square)
#     else:
#         my_list.append(0)
# print(my_list)

#Creating the above program using list comprehension
my_list = [(square ** 2) for square in range(1, 10) if (square % 2 == 0)]
print(my_list)
