## In this program will be looking at the instance attributes
## Instance attributes are values that are unique to a specific instance

class Employee:
    def __init__(self, first_name, last_name, salary):
        self.first_name = first_name
        self.last_name = last_name
        self.salary = salary
        self.email = "{}.{}@company.com".format(last_name, first_name).lower()

employee1 = Employee("Simon", "Kachepa", 6000)
employee2 = Employee("Hardazy", "Kache", 8000)

print()
print(employee1.email)
print(employee2.email)
print()