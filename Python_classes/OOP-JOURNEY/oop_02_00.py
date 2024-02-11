##starting another series of learning object oriented programming to fully understand the concepts

class Employee:
    pass

##creating instances of Employee
employee1 = Employee()
employee2 = Employee()
employee3 = Employee()

print(employee1)
print(employee2)
print(employee3)

##creating instance variables (variables of the instances)
employee1.name = "Simon"
employee1.last_name = "Kachepa"
employee1.email = "kachepasimon@gmail.com"
employee1.pay = 50000


employee2.name = "Hardazy"
employee2.last_name = "Kanga"
employee2.email = "hardazysk01@gmail.com"
employee2.pay = 100000

employee3.name = input("Enter name of the thrird employee: ")
employee3.last_name = input("Enter employee 3 last name: ")




##printing instance variables
print("Employee1 details:")
print(employee1.name)
print(employee1.last_name)
print(employee1.email)
print(employee1.pay)
print("********************************************")
print("Employee2 details:")
print(employee2.name)
print(employee2.last_name)
print(employee2.email)
print(employee2.pay)
