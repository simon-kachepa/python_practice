#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int stack_arr[MAX];
int first = -1;

void print_stack_data(void);
void push(int data);
int pop(void);
int isEmpty(void);
int isFull(void);
int peek(void);

int main(void)
{
    int choice, data;

    while (1)
    {
        printf("***************************** SELECT OPTION **************************\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. PRINT THE TOP ELEMENT\n");
        printf("4. PRINT ALL STACK ELEMENTS\n");
        printf("5. EXIT\n");
        printf("ENTER YOUR CHOICE HERE: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("ENTER DATA VALUE TO ADD TO THE STACK: ");
                scanf("%d", &data);
                push(data);
                break;

            case 2:
                data = pop();
                printf("THE DELETED ELEMENT IS: %d\n", data);
                break;

            case 3:
                data = peek();
                printf("THE TOPMOST ELEMENT IS: %d\n", data);
                break;

            case 4:
                printf("\nSTACK ELEMENT(S): ");
                print_stack_data();
                break;

            case 5:
                exit(1);
                break;

            default:
                printf("\nINVALID OPTION\n");
        }
    }

    return (0);
}

int isEmpty(void)
{
    if (first == -1)
        return (1);
    else
        return (0);
}

int isFull(void)
{
    if (first == MAX -1)
        return (1);
    else
        return (0);
}
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

/*Function that returns the top element of the stack -> peek()*/
int peek(void)
{
    int top_element;
    if (isEmpty())
    {
        printf("Stack underflow\n");
        exit(1);
    }
    top_element = stack_arr[0];
    return (top_element);
}

void print_stack_data(void)
{
    int index;

    if (isEmpty())
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

int pop(void)
{
    int index, value;

    if (isEmpty())
    {
        printf("The stack is empty\n");
        return (-1);
    }
    value = stack_arr[0];
    for (index = 0; index < first; index++)
        stack_arr[index] = stack_arr[index + 1];
    first -= 1;

    return (value);
}