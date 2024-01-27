class Person:

    def __init__(self, age):
        ## calling the set function
        self.__set_age(age)


    # getter methon to get the properties using the object
    def __get_age(self):
        return self.__age
    
    # setter method to set the value of age using an object
    def __set_age(self, age):
        if age > 18:
            self.__age = age
        else:
            self.__age = 0
    age = property(__get_age, __set_age)

my_obj1 = Person(23)
my_obj2 = Person(10)

print(my_obj1.age)
print(my_obj2.age)