#include <stdio.h>
#include <stdlib.h>
#define ARR_SIZE 4

int stack_arr[ARR_SIZE];
int top = -1;

void push(int data);
void print_stack_data(void);
int pop();
int isFull(void);
int isEmpty();
int peek();

int main(void)
{
    int choice, data;

    while (1)
    {
        printf("\n************************ USER CHOICES *************************\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. PRINT THE TOP ELEMENT\n");
        printf("4. PRINT ALL THE STACK ELEMENTS\n");
        printf("5. QUIT\n");
        printf("PLEASE ENTER YOUR CHOICE HERE: ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice)
        {
            case 1:
                printf("Enter the element you want to push: ");
                scanf("%d", &data);
                push(data);
                break;
            
            case 2:
                data = pop();
                printf("DELETED ELEMENT IS: %d\n", data);
                break;

            case 3:
                data = peek();
                printf("The topmost stack element is: %d\n", data);
                break;

            case 4:
                print_stack_data();
                break;

            case 5:
                exit(1);
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    }

    return (0);
}

int isFull(void)
{
    if (top == ARR_SIZE - 1)
        return (1);
    else
        return (0);
}

int isEmpty(void)
{
    if (top == -1)
        return (1);
    else
        return (0);
}

void push(int data)
{
    if (isFull())
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

    if (isEmpty())
    {
        printf("THE STACK IS EMPTY\n");
        return;
    }
     printf("STACK ELEMENTS =>: ");
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

    if (isEmpty())
    {
        printf("Stack underflow\n");
        exit(1);
    }
    element = stack_arr[top];
    top -= 1;

    return (element);
}

int peek()
{
    if (isEmpty())
    {
        printf("Stack underflow\n");
        exit(1);
    }
    return (stack_arr[top]);
}

