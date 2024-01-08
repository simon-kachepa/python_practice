#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
}Node;

Node *add_to_empty(Node *head, int data);
Node *add_at_begginning(Node *head, int data);
void inserting_at_end(Node *head, int data);

int main(void)
{
    Node *head = NULL;
    head = add_to_empty(head, 200);
    head = add_at_begginning(head, 100);
    inserting_at_end(head, 300);

    while (head)
    {
        printf("%d\n", head->data);
        head = head->next;
    }
    
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

void inserting_at_end(Node *head, int data)
{
    Node *tmp, *ptr;
    tmp = malloc(sizeof(Node));
    tmp->prev = NULL;
    tmp->data = data;
    tmp->next = NULL;

    ptr = head;
    while(ptr)
    {
        ptr = ptr->next;
    }
    ptr->next = tmp;
    tmp->prev = ptr;
}