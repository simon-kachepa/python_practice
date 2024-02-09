##Program to grab the command line
import sys
import json

argc = len(sys.argv)
argv_list = sys.argv[1:]
int_list = []
for i in range(1,argc):
    int_list.append(int(sys.argv[i]))

argument_JSON = json.dumps(argv_list)

print(argv_list)
print(int_list)
print(argument_JSON)