tuple_a = (23, 7, 9)
# print(len(tuple_a))
tuple_b = (3, 6)

tuple_a = list(tuple_a)
tuple_b = list(tuple_b)
# new_tuple = tuple_a + tuple_b
# print(new_tuple)
if tuple_a < tuple_b:
    for i in range(len(tuple_a), len(tuple_b)):
        tuple_a.append(0)
elif tuple_a > tuple_b:
    for i in range(len(tuple_b), len(tuple_a)):
        tuple_b.append(0)

temp_list = []
for i in range(0, len(tuple_a)):
    temp_list.append(tuple_a[i] + tuple_b[i])

new_tuple = tuple(temp_list)

print(new_tuple)