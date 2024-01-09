#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
}Node;

void delete_at_certain_position(Node *head, int position)
{
    Node *tmp = head;
    Node *prev_n;

    if (head)
    {
        while (position > 1)
        {
            tmp = tmp->next;
            position--;
        }
        prev_n = tmp->prev;
        prev_n->next = tmp->next;
        tmp->next->prev = prev_n;
        free(tmp);
        tmp = NULL;
    }
}