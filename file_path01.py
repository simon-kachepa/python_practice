import os

path0 = "/Users/rutendogono/Desktop/test.txt"
path1 = "/Users/rutendogono/Desktop/hardy.txt"
path2 = "/Users/rutendogono/Desktop/test_folder"

# if os.path.exists(path0):
#     print("That location exists")
#     if os.path.isfile(path0):
#         print("The location is a file")
# else:
#     print("That location doesn't exitst")

if os.path.exists(path1):
    print("The path location exists")
else:
    print("The path location doesn't exist")

if os.path.exists(path2):
    print("That location exists")
    if os.path.isdir(path2):
        print("The location is a directory")
else:
    print("That location doesn't exitst")