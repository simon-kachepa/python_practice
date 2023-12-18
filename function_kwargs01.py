def greetings(**kwargs):
    print("Hello", end=" ")
    for key,value in kwargs.items():
        print(value, end = " ")

greetings(title = "Mr.", first_name = "Simon", midle_name = "Hardy", last_name = "Kachepa")
print()