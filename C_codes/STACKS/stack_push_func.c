#include <stdio.h>
#include <stdlib.h>
#define ARR_SIZE 4

int stack_arr[ARR_SIZE];
int top = -1;

void push(int data)
{
    if (top == ARR_SIZE - 1)
    {
        printf("Stack overflow\n");
        return;
    }
    top += 1;
    stack_arr[top] = data;
}