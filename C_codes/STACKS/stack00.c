#include <stdio.h>
#include <stdlib.h>
#define ARR_SIZE 4

int stack_arr[ARR_SIZE];
int top = -1;

void push(int data);
void print_stack_data(void);
int pop();

int main(void)
{
    int data;
    // Trying to print the stack elements before pushing elements
    print_stack_data();

    // Pushing elements to the stack and printing the pushed elements
    push(100);
    push(200);
    push(300);
    push(400);
    print_stack_data();

    // Removing elements from the stack and printing the stack data after pop
    data = pop();
    data = pop();
    data = pop();
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
        if (index == top)
            printf("%d\n", stack_arr[index]);
        else
            printf("%d, ", stack_arr[index]);
        index++;
    }
}

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