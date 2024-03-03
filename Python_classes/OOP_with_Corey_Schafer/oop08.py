## In this program I will look at the concept of Inheritence
## I am going to create another subclass called Manager that inherits from Employee class

class Employee:

    amount_raise = 1.04

    def __init__(self, first_name, last_name, salary):
        self.first_name = first_name
        self.last_name = last_name
        self.salary = salary
        self.email = "{}.{}@company.com".format(last_name, first_name).lower()

    def fullname(self):
        return "{} {}".format(self.first_name, self.last_name)
    
    def pay_raise(self):
        return int(self.salary * self.amount_raise)
    
    @classmethod
    def set_raise_amount(cls, amount):
        cls.amount_raise = amount


class Developer(Employee):
    
    def __init__(self, first_name, last_name, salary, programming_language):
        super().__init__(first_name, last_name, salary)
        self.programming_language = programming_language

class Manager(Employee):

    def __init__(self, first_name, last_name, salary, employees=None):
        super().__init__(first_name, last_name, salary)
        if employees == None:
            self.employees = []
        else:
            self.employees = employees

    def add_employee(self, employee):
        if employee not in self.employees:
            self.employees.append(employee)

    def remove_employee(self, employee):
        if employee in self.employees:
            self.employees.remove(employee)

    def print_employees(self):
        for employee in self.employees:
            print("->{}".format(employee.fullname()))

developer1 = Developer("Simon", "Kachepa", 50000, "Python")
developer2 = Developer("Hardlife", "Kache", 60000, "Java")

# print()
# print(developer1.email)
# print(developer2.programming_language)
# print()

manager1 = Manager("Peter", "John", 10000)

print(manager1.email)

#Adding employee to the manager list of employees 
manager1.add_employee(developer1)
manager1.print_employees()
print("________________________")

manager1.add_employee(developer2)
manager1.print_employees()
print("________________________")

##Removing employee from manager's list of employees
manager1.remove_employee(developer1)
manager1.print_employees()
print("________________________")


# print(help(Developer)) ##To see whats going on under the wood