import shutil

try:
    shutil.copyfile("test.txt", "hardy.txt")
except FileNotFoundError:
    print("Did not find the file to copy from, file doesn't exist")
except Exception:
    print("Something went wrong while copying the file")