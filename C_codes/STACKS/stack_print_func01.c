#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int stack_arr[MAX];
int first = -1;

void print_stack_data(void)
{
    int index;

    if (isEmpty())
    {
        printf("The stack is empty\n");
        return;
    }

    for (index = 0; index <= first; index++)
    {
        if (stack_arr[index] == stack_arr[first])
            printf("%d\n", stack_arr[index]);
        else
            printf("%d, ", stack_arr[index]);
    }

}