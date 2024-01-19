#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int stack_arr[MAX];
int first = -1;

void print_stack_data(void);
void push(int data);

int main(void)
{
    push(10);
    push(20);
    push(30);
    print_stack_data();
    return (0);
}

void push(int data)
{
    int index;

    first += 1;
    for (index = first; index > 0; index--)
    {
        stack_arr[index] = stack_arr[index - 1];
    }
    stack_arr[0] = data;
}

void print_stack_data(void)
{
    int index;

    if (first == -1)
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