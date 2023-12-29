wild_animals = ("elephants", "lions", "leopard", "baboon", "buffalos", "rhinoceros")

# To delete an item in a tuple, 1. convert the tuple into a list. 2. delete the item. 3. convert back the updated list into a tuple

temporary_list = list(wild_animals)
temporary_list.remove("baboon")
wild_animals = tuple(temporary_list)
print(wild_animals)