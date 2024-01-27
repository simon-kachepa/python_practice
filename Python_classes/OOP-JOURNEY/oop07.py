class Student:
    def __init__(self, name, house):
        if not name:
            raise ValueError("Missing name")
        elif house not in ["St Anne's", "Kotwa", "Mandebvu", "Vhombozi"]:
            raise ValueError("Invalid house")
        else:
            self.name = name
            self.house = house

def main():
    student = get_student()
    print(f"{student.name} from {student.house}")

def get_student():
    name = input("Name: ")
    house = input("House: ")
    return Student(name, house)

if __name__ == "__main__":
    main()