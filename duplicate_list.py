numbers = [10, 20, 30, 40, 50, 80]
seen = set()
isSeen = False
for number in numbers:
    if number in seen:
        isSeen = True
        break
    else:
        seen.add(number)
if isSeen == True:
    print("Duplicate found")
else:
    print("No duplicate found")