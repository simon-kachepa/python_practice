import os
#The OS allows us to interact with the operating system 
#it allows executing shell commands directly from the python script
#in conjuction with files, it gives more powerful ways to interact with our files being created
#this including creating directories, changing directories, renaming files, + others.

with open("my_text.txt", mode="w", encoding="UTF-8") as f:
    f.write("This is the best way to make it\nBelieve in yourself Simon\nThere is no better version of you man\nKeep going\n")

with open("my_text.txt", encoding="UTF-8") as f:

    print(f.read(), end='')

print(f.closed)
print(f.name)
print(f.mode)

os.rename("my_text.txt", "my_file.txt") #renaming our file
#os.remove("my_file.txt")
# os.mkdir("my_file_directory") #Creating a new directory
os.chdir("my_file_directory") #changing directory to the newly created directory
print("Current directory: ", os.getcwd()) #printing the current working directory
os.chdir("..")
print("Current directory: ", os.getcwd())
#os.rmdir("my_file_directory") #removing the given directory
