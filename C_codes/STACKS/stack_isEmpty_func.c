#include <stdio.h>
#include <stdlib.h>
#define ARR_SIZE 4

int stack_arr[ARR_SIZE];
int top = -1;

int isEmpty(void)
{
    if (top == -1)
        return (1);
    else
        return (0);
}