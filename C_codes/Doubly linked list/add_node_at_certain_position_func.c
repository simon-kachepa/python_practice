#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
}Node;

void add_at_certain_position(Node *head, int position, int data)
{
    Node *current = head;
    Node *next_n = NULL;
    Node *tmp = NULL;

    tmp = malloc(sizeof(Node));
    tmp->next = NULL;
    tmp->data = data;
    tmp->prev = NULL;

    position--;
    while (position > 1)
    {
        current = current->next;
        position--;
    }
    if (current->next == NULL)
    {
        current->next = tmp;
        tmp->prev = current;
    }
    else
    {
        next_n = current->next;
        current->next = tmp;
        next_n->prev = tmp;
        tmp->prev = current;
        tmp->next = next_n;
    }
}