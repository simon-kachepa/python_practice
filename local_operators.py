#Logical operators (and, or, not)

age = int(input("Enter your age: "))

if age >= 18 and age <= 50:
    print("You are a good fit for the job, you can work")
elif age < 18 or age > 50:
    print("Your age does not allow you to work")