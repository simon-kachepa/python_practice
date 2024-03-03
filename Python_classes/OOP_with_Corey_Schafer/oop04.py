## In this program I will look at the class attributes (class variables)
## Class attributes are the same for all the instances and are declared within the class itself
## Class attributes are attributes that are shared among all the instances of a class

class Employee:

    amount_raise = 1.04 # Declaring the class variable that will incerase the salary of all the employees

    def __init__(self, first_name, last_name, salary):
        self.first_name = first_name
        self.last_name = last_name
        self.salary = salary
        self.email = "{}.{}@company.com".format(last_name, first_name).lower()

    def fullname(self):
        return "{} {}".format(self.first_name, self.last_name)
    
    def pay_raise(self):
        return int(self.salary * self.amount_raise)

employee1 = Employee("Simon", "Kachepa", 6000)
employee2 = Employee("Hardazy", "Kache", 8000)

print()
print(employee1.salary)
print(employee1.pay_raise())
print()

##Looking at what's going on under the wood
print(employee1.__dict__) #This will show that the employee one doesnt have the amount_raise itself but it gets it from the class it belongs to
print(Employee.__dict__) ## The class itself contains the amount_raise attribute which will be shared amoung its instances