def count_item(my_list):
    items_dict = {}
    for item in my_list:
        items_dict[item] = my_list.count(item)
    return items_dict
def main():
    list1 = ['apple', 'banana', 'apple', 'orange', 'banana', 'apple']
    result = count_item(list1)
    print(result)

main()