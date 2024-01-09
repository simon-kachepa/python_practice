#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
}Node;

void print_linked_list(Node *head);
Node *add_to_empty(Node *head, int data);
Node *add_at_begginning(Node *head, int data);
void inserting_at_end(Node *head, int data);
void add_at_certain_position(Node *head, int position, int data);
Node *delete_first_node(Node *head);

int main(void)
{
    Node *head = NULL;
    /* Printing the list before adding any node */
    print_linked_list(head);

    /*Adding a node to an empty list and print*/
    // head = add_to_empty(head, 200);
    // print_linked_list(head);

    /*Adding a new node at the begginning of the list*/
    // head = add_at_begginning(head, 100);
    // print_linked_list(head);

    /*Inserting a new node at the end of the list*/
    // inserting_at_end(head, 300);
    // print_linked_list(head);

    /*Adding a new node at the second position*/
    // add_at_certain_position(head, 2, 800);
    // print_linked_list(head);

    /*Adding a new node at the fifth psition*/
    // add_at_certain_position(head, 5, 600);
    // print_linked_list(head);

    /* Deleting the first node */
    head = delete_first_node(head);
    print_linked_list(head);
    
    return (0);
}

void print_linked_list(Node *head)
{
    Node *ptr = head;
    if (!ptr)
    {
        printf("The linked list is empty\n");
    }
    else
    {
        while (ptr)
        {
            if (ptr->next == NULL)
            {
                printf("%d\n", ptr->data);
            }
            else
            {
                printf("%d, ", ptr->data);
            }
            ptr = ptr->next;
        }
    }
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
    while(ptr->next)
    {
        ptr = ptr->next;
    }
    ptr->next = tmp;
    tmp->prev = ptr;
}

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