with open("my_text.txt", mode="w", encoding="UTF-8") as f:
    f.write("This is the best way to make it\nBelieve in yourself Simon\nThere is no better version of you man\nKeep going\n")

with open("my_text.txt", encoding="UTF-8") as f:

    print(f.read(), end='')

print(f.closed)
print(f.name)
print(f.mode)