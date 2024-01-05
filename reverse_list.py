def print_reversed_list_integer(my_list=[]):
    max_index = len(my_list) - 1
    for i in range(max_index, -1, -1):
        print(my_list[i])

def main():
    my_list = [1, 2, 3, 4, 5]
    print_reversed_list_integer(my_list)

main()