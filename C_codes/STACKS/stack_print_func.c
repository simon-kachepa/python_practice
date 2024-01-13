#include <stdio.h>
#include <stdlib.h>
#define ARR_SIZE 4

int stack_arr[ARR_SIZE];
int top = -1;

void print_stack_data(void)
{
    int index = 0;

    if (top == -1)
    {
        printf("The stack is empty\n");
        return;
    }
    while (index <= top)
    {
        if (index == top)
            printf("%d\n", stack_arr[index]);
        else
            printf("%d, ", stack_arr[index]);
        index++;
    }
}