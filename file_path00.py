import os

path = "/Users/rutendogono/Desktop/test.txt"

if os.path.exists(path):
    print("That location exists")
else:
    print("That location doesn't exitst")