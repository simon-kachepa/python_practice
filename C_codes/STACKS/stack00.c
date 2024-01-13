#include <stdio.h>
#define ARR_SIZE 4

int stack_arr[ARR_SIZE];
int top = -1;

void push(int data);
void print_stack_data(void);

int main(void)
{
    print_stack_data();
    push(100);
    push(200);
    push(300);
    push(400);
    print_stack_data();
    return (0);
}

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
        printf("%d\n", stack_arr[index]);
        index++;
    }
}