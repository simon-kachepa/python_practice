# variable scope - Variables have local scope, they are accessible from withing the region they are declared
# variable in Python follows LEGB rule - Local, Enclosing, Global, Built-in

name = "Simon"

def greeting():
    name = "Kachepa"
    print(f"Hello {name}!")

greeting()
print(f"Hello {name}!")