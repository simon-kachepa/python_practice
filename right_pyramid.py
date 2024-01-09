# Question: WAP that prints a right pyramid

rows = int(input("Enter number of rows: "))

for row in range(1, (int((rows + 1) / 2) + 1)):
    for j in range(row, 2 * row):
        print("*", end="")
    print("")

for row in range(int((rows + 1) / 2), 1, -1):
    for j in range(2 * row, row+1, -1):
        print("*", end="")
    print("")