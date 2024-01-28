import random

class Hat:

    def __init__(self):
        self.houses = ["Vhombozi", "Kotwa", "Macheke", "Mandebvu"]

    def sort(self, name):
        house = random.choice(self.houses)
        print("{} is in {}".format(name, house))

def main():
    hat = Hat()
    hat.sort("Captain")

if __name__ == "__main__":
    main()
