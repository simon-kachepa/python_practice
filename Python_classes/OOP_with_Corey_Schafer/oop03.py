## In this program I will introduce a method called fullname() that returns the full name of the current instance

class Employee:
    def __init__(self, first_name, last_name, salary):
        self.first_name = first_name
        self.last_name = last_name
        self.salary = salary
        self.email = "{}.{}@company.com".format(last_name, first_name).lower()

    def fullname(self):
        return "{} {}".format(self.first_name, self.last_name)

employee1 = Employee("Simon", "Kachepa", 6000)
employee2 = Employee("Hardazy", "Kache", 8000)

print()
print(employee1.fullname())
print(employee2.fullname())
print()