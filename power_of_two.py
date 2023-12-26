num = int(input("Enter thr number here: "))
if num == 0:
    exit(98)
else:
    if (num & (num & (num -1)) == 0):
        print(f"{num} is a power of 2")
    else:
        print(f"{num} is not a power of 2")
