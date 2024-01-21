#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *link;
}Node;

Node *top = NULL;

int isEmpty(void)
{
    if (top == NULL)
        return (1);
    else
        return (0);
}