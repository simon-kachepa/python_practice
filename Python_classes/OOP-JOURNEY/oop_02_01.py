##starting another series of learning object oriented programming to fully understand the concepts

class Employee:
    def __init__(self, first_name, last_name, pay):
        self.first_name = first_name
        self.last_name = last_name
        self.pay = pay
        self.email = first_name + '.' + last_name + "@company.com"

        ##creating a method that returns the full name of the employee
    def fullname(self):
            return f"{self.first_name} {self.last_name}"

##creating instances of Employee
employee1 = Employee("Simon", "Kachepa", 60000)
employee2 = Employee("Hardazy", "Kanga", 78000)


##printing instance variables
print("Employee1 details:")
print(employee1.first_name)
print(employee1.last_name)
print(employee1.fullname())
print(employee1.email)
print(employee1.pay)
print("********************************************")
print("Employee2 details:")
print(employee2.first_name)
print(employee2.last_name)
print(employee2.fullname())
print(employee2.email)
print(employee2.pay)