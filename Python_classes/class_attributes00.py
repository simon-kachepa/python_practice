class User:
    id = 1

def main():
    user1 = User()
    User.id = 89
    print(user1.id)


if __name__ == "__main__":
    main()