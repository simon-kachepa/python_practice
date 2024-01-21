#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int stack[MAX];
int top = -1;

void push(int data);
int pop();
int isFull(void);
int isEmpty();
void bin_conversion(int num);

int main(void)
{
    int number;

    printf("ENTER THE NUMBER TO FIND ITS PRIME FACTORS: ");
    scanf("%d", &number);

    printf("BINARY EQUIVERLANT OF %d is: ", number);
    bin_conversion(number);

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
    stack[top] = data;
}

int pop()
{
    int element;

    if (isEmpty())
    {
        printf("Stack underflow\n");
        exit(1);
    }
    element = stack[top];
    top -= 1;

    return (element);
}

int isFull(void)
{
    if (top == MAX - 1)
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

void bin_conversion(int num)
{
    int remainder;

    while (num != 0)
    {
        remainder = num % 2;
        push(remainder);
        num = num / 2;
    }

    while (top != -1)
    {
        printf("%d", pop());
    }
    printf("\n");
}