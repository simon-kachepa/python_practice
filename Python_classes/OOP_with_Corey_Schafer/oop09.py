## In this program I will look magic methods
##

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

    def __repr__(self):
        return "Employee('{}', '{}', {})".format(self.first_name, self.last_name, self.salary)
    
    def __str__(self):
        return "{} - {}".format(self.fullname(), self.email)


employee1 = Employee("Simon", "Kachepa", 6000)
employee2 = Employee("Hardazy", "Kache", 8000)

print(repr(employee1))
print(str(employee1))

print(employee1)

