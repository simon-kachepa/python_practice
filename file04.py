import os

with open("my_text.txt", mode="w", encoding="UTF-8") as f:
    f.write("This is the best way to make it\nBelieve in yourself Simon\nThere is no better version of you man\nKeep going\n")

with open("my_text.txt", encoding="UTF-8") as f:

    lineNum = 1

    while True:
        line = f.readline()

        if not line:
            break

        newList = line.split()

        print(f"Line {lineNum}: {line}", end="")
        print(f"Line {lineNum}: {len(newList)} words")

        lineNum = lineNum + 1