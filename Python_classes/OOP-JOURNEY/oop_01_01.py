import random

class Hat:

    houses = ["Vhombozi", "Kotwa", "Mandebvu", "Macheke"]

    @classmethod
    def sort(cls, name):
        house = random.choice(cls.houses)
        print("{} is in {}".format(name, house))

def main():
        
        Hat.sort("Captain")

if __name__ == "__main__":
     main()