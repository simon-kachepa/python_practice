#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *link;
}Node;

Node *top = NULL;

int pop(void)
{
    int value;

    Node *tmp = top;

    if (!tmp)
    {
        printf("Stack underflow\n");
        exit(1);
    }
    value = tmp->data;
    top = top->link;
    free(tmp);
    tmp = NULL;

    return (value);
}