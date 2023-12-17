# set - is a collection of unordered and unindexed items. It does not allow duplicate items

set1 = {23, 78, 6, 10}

#print(set1)
#for number in set1:
#    print(number)

#methods available for sets
#set1.add(34)
#set1.clear()
#set1.pop()

set2 = {45, 16, 10, 33}

#set1.update(set2)
#set3 = set1.intersection(set2)
#set3 = set1.union(set2)
set3 = set1.difference(set2)

print(set3)
