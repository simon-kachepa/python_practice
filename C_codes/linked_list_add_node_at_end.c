#include "lists.h"

void add_node_at_end(Node *head, int data)
{
    Node *current = head;

    Node *tmp = malloc(sizeof(Node));
    tmp->data = data;
    tmp->next = NULL;

    while(current->next)
    {
        current = current->next;
    }
    current->next = tmp;
}