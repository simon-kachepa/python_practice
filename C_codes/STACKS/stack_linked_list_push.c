#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *link;
}Node;

Node *top = NULL;

void push(int data)
{
    Node *new_node = malloc(sizeof(Node));

    if (!new_node)
    {
        printf("Stack overflow\n");
        exit(1);
    }
    new_node->data = data;
    new_node->link = NULL;

    new_node->link = top;
    top = new_node;
}