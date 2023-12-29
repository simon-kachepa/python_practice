acquatic_animals = ("crocodile", "fish", "hippo")

# To update a tuple item, first convert the tuple into a list, update the item then convert back the updated list into a tuple

temporary_list = list(acquatic_animals)
temporary_list[1] = "frog"

acquatic_animals = tuple(temporary_list)

print(acquatic_animals)