tuple_a = (8,10)
tuple_b = (7,)

new_tuple = ((tuple_a[0] if len(tuple_a) >= 1 else 0) +\
(tuple_b[0] if len(tuple_b) >= 1 else 0),\
(tuple_a[1] if len(tuple_a) > 1 else 0) +\
(tuple_b[1] if len(tuple_b) > 1 else 0))

print(new_tuple)