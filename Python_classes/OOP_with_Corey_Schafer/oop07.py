## In this program I will look at the concept of Inheritence
## I am going to create a subclass called Developer that inherits from Employee class

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

dev1 = Developer("Simon", "Kachepa", 50000, "Python")
dev2 = Developer("Hardlife", "Kache", 60000, "Java")

print()
print(dev1.email)
print(dev1.programming_language)
print()

# print(help(Developer)) ##To see whats going on under the wood