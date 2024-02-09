##Program to add the command line arguments
import sys

argc = len(sys.argv)
sum = 0
for i in range(1, argc):
    sum += int(sys.argv[i])

print(sum)
