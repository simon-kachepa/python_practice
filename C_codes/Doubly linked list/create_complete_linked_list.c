#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
}Node;

Node *add_to_empty(Node *head, int data);
void inserting_at_end(Node *head, int data);
Node *create_double_linked_list(Node *head);

int main(void)
{
    Node *head = NULL;
    head = create_double_linked_list(head);
    

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

void inserting_at_end(Node *head, int data)
{
    Node *tmp, *ptr;
    tmp = malloc(sizeof(Node));
    tmp->prev = NULL;
    tmp->data = data;
    tmp->next = NULL;

    ptr = head;
    while(ptr->next)
    {
        ptr = ptr->next;
    }
    ptr->next = tmp;
    tmp->prev = ptr;
}

Node *create_double_linked_list(Node *head)
{
    int nodes, node, data;

    printf("Enter number of nodes: ");
    scanf("%d", &nodes);

    if (nodes == 0)
        return head;
    printf("Enter data of node 1: ");
    scanf("%d", &data);
    head = add_to_empty(head, data);

    node = 1;
    while (node < nodes)
    {
        printf("Enter data of node %d:", node + 1);
        scanf("%d", &data);
        inserting_at_end(head, data);
        node++;
    }

    return (head);
}