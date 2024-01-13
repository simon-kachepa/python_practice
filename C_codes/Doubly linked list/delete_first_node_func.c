#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
}Node;

Node *delete_first_node(Node *head)
{
    Node *tmp = head;
    if (!tmp)
        return head;
        
    head = head->next;
    head->prev = NULL;
    free(tmp);
    tmp = NULL;

    return (head);
}