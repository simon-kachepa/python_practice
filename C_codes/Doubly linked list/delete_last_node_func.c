#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
}Node;

void delete_last_node(Node *head)
{
    Node *tmp = head;
    Node * current;

    if (tmp)
    {
        while (tmp->next != NULL)
            tmp = tmp->next;
        current = tmp->prev;
        current->next = NULL;
        free(tmp);
        tmp = NULL;
    }
    
}
