#include <stdio.h>
#include <stdlib.h>
#define ARR_SIZE 4

int stack_arr[ARR_SIZE];
int top = -1;

int pop()
{
    int element;

    if (top == -1)
    {
        printf("Stack underflow\n");
        exit(1);
    }
    element = stack_arr[top];
    top -= 1;

    return (element);
}