def print_matrix_integer(matrix=[[]]):
    for i in matrix:
        for j in i:
            if j == i[-1]:
                print(f"{j}$")
            else:
                print(j, end = ' ')

def main():
    my_list = [[1,2,3,9],[4,5,6],[7,8,9, 0, 13]]
    print_matrix_integer(my_list)

main()