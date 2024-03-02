## Python program that creates command prompt
## Introducing the command to quit the console gracefully

import cmd

class MyConsole(cmd.Cmd):
    prompt = "(my_console) $ "


    def do_quit(self, arg):
        """
        This quits or exits the console 

            Usage: quit
        """
        print("Goodbyeee")
        return (True)

if __name__ == "__main__":
    MyConsole().cmdloop()