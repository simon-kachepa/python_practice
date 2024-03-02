## Python program that creates command prompt
## This is the very first version of my command prompt

import cmd

class MyConsole(cmd.Cmd):
    pass

if __name__ == "__main__":
    MyConsole().cmdloop()