def myfunc(self, *args):
    print(args)
    print(len(args))
    print(args[0])


if __name__ == "__main__":
    myfunc(16, 78, 90)