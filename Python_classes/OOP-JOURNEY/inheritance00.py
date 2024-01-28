class Wizzard:

    def __init__(self, name):

        if not name:
            raise ValueError("Missing name")
        self.name = name

    ...


class Student(Wizzard):

    def __init__(self, name, house):
        super().__init__(name)
        self.house = house

    ...

class Professor(Wizzard):

    def __init__(self, name, subject):
        super().__init__(name)
        self.subject = subject

    ...

def main():
    wizzard = Wizzard("Abdul")
    student = Student("Captain", "Vhombozi")
    professor = Professor("Mr Jakarasi", "Maths")