numbers = [10, 20, 30, 40, 50, 80, 30]
seen = []
isSeen = False
for number in numbers:
    if number in seen:
        isSeen = True
        break
    else:
        seen.append(number)
if isSeen == True:
    print("Duplicate found")
else:
    print("No duplicate found")