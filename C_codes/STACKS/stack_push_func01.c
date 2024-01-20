#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int stack_arr[MAX];
int first = -1;

void push(int data)
{
    int index;

    if (isFull())
    {
        printf("Stack overflow\n");
        return;
    }
    first += 1;
    for (index = first; index > 0; index--)
    {
        stack_arr[index] = stack_arr[index - 1];
    }
    stack_arr[0] = data;
}