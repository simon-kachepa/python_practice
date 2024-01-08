#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
}Node;

Node *add_to_empty(Node *head, int data);

int main(void)
{
    Node *head = NULL;
    head = add_to_empty(head, 100);

    printf("%d\n", head->data);
    return (0);
}

Node *add_to_empty(Node *head, int data)
{
    Node *tmp = malloc(sizeof(Node));
    tmp->prev = NULL;
    tmp->data = data;
    tmp->next = NULL;

    head = tmp;
    return (head);
}