#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
}Node;

Node *add_at_begginning(Node *head, int data)
{
    Node *tmp = malloc(sizeof(Node));
    tmp->prev = NULL;
    tmp->data = data;
    tmp->next = NULL;

    tmp->next = head;
    head->prev = tmp;
    head = tmp;

    return (head);
}