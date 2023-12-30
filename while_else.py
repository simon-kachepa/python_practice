animals_list = ["elephant", "impala","zebra", "lion", "girraffe"]
list_length = len(animals_list)
index = 0
while index < list_length:
    if animals_list[index] == "lion":
        print("Lion is included in the animals list")
        break
    index += 1
else:
    print("Lion not included in the animals list")