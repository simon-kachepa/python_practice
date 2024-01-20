#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int stack_arr[MAX];
int first = -1;

int pop(void)
{
    int index, value;

    if (isEmpty())
    {
        printf("The stack is empty\n");
        return (-1);
    }
    value = stack_arr[0];
    for (index = 0; index < first; index++)
        stack_arr[index] = stack_arr[index + 1];
    first -= 1;

    return (value);
}