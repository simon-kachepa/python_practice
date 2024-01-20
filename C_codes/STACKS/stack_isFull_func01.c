#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int stack_arr[MAX];
int first = -1;

int isFull(void)
{
    if (first == MAX -1)
        return (1);
    else
        return (0);
}