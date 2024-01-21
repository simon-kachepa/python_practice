#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *link;
}Node;

Node *top = NULL;

int peek(void)
{
    int top_element;
    if (isEmpty())
    {
        printf("Stack underflow\n");
        exit(1);
    }
    top_element = top->data;

    return (top_element); 
}