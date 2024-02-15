##In this part I am getting to class and instance attributes and how to create, modify and use them

class Employee:
    raise_pay = 1.04
    employee_count = 0

    def __init__(self, first_name, last_name, pay):
        self.first_name = first_name
        self.last_name = last_name
        self.pay = pay
        self.email = first_name + '.' + last_name + "@company.com"
        Employee.employee_count += 1

        ##creating a method that returns the full name of the employee
    def fullname(self):
            return f"{self.first_name} {self.last_name}"
    
    def apply_raise_pay(self):
        return int(self.pay * self.raise_pay)

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
print(employee1.apply_raise_pay())
print("********************************************")
print("Employee2 details:")
print(employee2.first_name)
print(employee2.last_name)
print(employee2.fullname())
print(employee2.email)
print(employee2.pay)
print(employee2.apply_raise_pay())
print("****************************************************")

print(Employee.employee_count)