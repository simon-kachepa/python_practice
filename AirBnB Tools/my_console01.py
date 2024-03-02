## Python program that creates command prompt
## Customizing my prompt

import cmd

class MyConsole(cmd.Cmd):
    prompt = "(my_console) $ "


if __name__ == "__main__":
    MyConsole().cmdloop()