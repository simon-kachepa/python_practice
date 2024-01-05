def fib(n):
    if n < 2:
        return n
    current, next = 0, 1
    while n:
        current, next = next, current + next
        n -= 1
    return current

def main():
    print(fib(5))
    print(fib(2))
    print(fib(11))

main()