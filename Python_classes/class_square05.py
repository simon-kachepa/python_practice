class Square:
    def __init__(self, size=0):
        ## Calling the setter method
        self.size = size

    @property
    def size(self):
        return (self.__size)
        
    @size.setter
    def size(self, value):
        if not isinstance(value, int):
            raise TypeError("size must be an integer")
        elif value < 0:
            raise ValueError("Size must be 0 or greater")
        else:
            self.__size = value

    def area(self):
        return (self.__size * self.__size)

my_square = Square(89)
print("Area: {} for size: {}".format(my_square.area(), my_square.size))

my_square.size = 3
print("Area: {} for size: {}".format(my_square.area(), my_square.size))

try:
    my_square.size = "5 feet"
    print("Area: {} for size: {}".format(my_square.area(), my_square.size))
except Exception as e:
    print(e)