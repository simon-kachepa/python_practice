#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *link;
}Node;

Node *top = NULL;

void print(void)
{
    Node *ptr;

    ptr = top;
    if (!ptr)
    {
        printf("Stack underflow\n");
        exit(1);
    }
    printf("Stack Element(s): ");
    while (ptr)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
}