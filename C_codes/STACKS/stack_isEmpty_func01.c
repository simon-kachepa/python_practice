#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int stack_arr[MAX];
int first = -1;

int isEmpty(void)
{
    if (first == -1)
        return (1);
    else
        return (0);
}