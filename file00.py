path = "/Users/rutendogono/Desktop/test.txt"

with open(path, encoding="utf-8") as f:
    read_data = f.read()
    
print(read_data)