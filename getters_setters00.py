class Person:

    def __init__(self, age):
        self.age = age

    @property
    def age(self):
        return self.__age
    
    @age.setter
    def age(self, age):
        if age > 18:
            self.__age = age
        else:
            self.__age = 0

my_obj = Person(10)
print(my_obj.age)
