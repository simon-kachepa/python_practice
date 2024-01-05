from dis import dis

def my_func(n):
    if n > 5:
        return n
    else:
        return n + 5

print(dis(my_func))