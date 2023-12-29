domestic_animals = ("catle", "goat", "chicken")

#To add item into a tuple, first convert that tuple into a list using list() method, add item and convert it back into a tuple

temporary_list = list(domestic_animals)
temporary_list.append("dog")
temporary_list.append("sheep")

domestic_animals = tuple(temporary_list)
print(domestic_animals)