#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}Node;

void add_node_at_end(Node *head, int data);
void print_list_data(Node *head);
Node *inserting_at_beginning(Node *head, int data);
void inserting_at_certain_position(Node *head, int position, int data);
void deleting_at_end(Node *head);
Node *delete_at_beginning(Node *head);
void deleting_at_particular_position(Node *head, int position);
Node *delete_entire_list(Node *head);
Node *reverse_linked_list(Node *head);
int checking_list_for_loop(Node *head);

int main(void)
{
    Node *head = NULL;

    head = malloc(sizeof(Node));
    head->data = 900;
    head->next = NULL;

    Node *current = malloc(sizeof(Node));
    current->data = 910;
    current->next = NULL;
    head->next = current;

    current = malloc(sizeof(Node));
    current->data = 920;
    current->next = NULL;
    head->next->next = current;

    current = malloc(sizeof(Node));
    current->data = 930;
    current->next = NULL;
    head->next->next->next = current;

    printf("Linked list before inserting at the end: ");
    print_list_data(head);

    /*Inserting at the end and printing the data after insertion */
    add_node_at_end(head, 800);
    printf("Linked list after inserting at the end: ");
    print_list_data(head);

    /* Inserting a node at the beginning of the list */
    head = inserting_at_beginning(head, 27);
    printf("Linked list after inserting at the beggining: ");
    print_list_data(head);

    /* Inserting at a given position */
    inserting_at_certain_position(head, 4, 722);
    printf("Linked list after inserting at a given position: ");
    print_list_data(head);

    /* Deleting the last node*/
    // deleting_at_end(head);
    // printf("Linked list after deleting the last node: ");
    // print_list_data(head);

    /* Deleting first node and printing the new list after deletion*/
    // head = delete_at_beginning(head);
    // printf("Linked list after deleting the first node: ");
    // print_list_data(head);

    /* Deleting node at a certain position */
    // deleting_at_particular_position(head, 3);
    // printf("Linked list after deleting the node at a certain position: ");
    // print_list_data(head);

    /*Deleting entire list*/
    // head = delete_entire_list(head);
    // printf("Linked list after deleting the the entire list: \n");
    // print_list_data(head);

    /*Reversing the list and printing the reversed list*/
    head = reverse_linked_list(head);
    printf("Linked list after reversing: ");
    print_list_data(head);

    int has_loop = checking_list_for_loop(head);
    if (has_loop)
    {
        printf("Loop found\n");
    }
    else
    {
        printf("No loop found\n");
    }

    return (0);
}

void print_list_data(Node *head)
{
    int count = 0;
    

    if (!head)
    {
        printf("Linked list is empty\n");
    }
    else
    {
        Node *ptr = head;
        while (ptr)
        {
            if (ptr->next == NULL)
            {
                printf("%d", ptr->data);
            }
            else
            {
                printf("%d, ", ptr->data);
            }
            count++;
            ptr = ptr->next;
        }
    }
    
    printf("\nNumber of nodes: %d\n", count);
}

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

Node *inserting_at_beginning(Node *head, int data)
{
    Node *tmp = malloc(sizeof(Node));
    tmp->data = data;
    tmp->next = NULL;

    tmp->next = head;
    head = tmp;

    return head;
}

void inserting_at_certain_position(Node *head, int position, int data)
{
    Node *ptr = head;
    Node *tmp = malloc(sizeof(Node));
    tmp->data = data;
    tmp->next = NULL;

    position--;
    while (position != 1)
    {
        ptr = ptr->next;
        position--;
    }
    tmp->next = ptr->next;
    ptr->next = tmp;

}

void deleting_at_end(Node *head)
{
    if (!head)
    {
        printf("The linked list is empty\n");
    }
    if (head->next == NULL)
    {
        free(head);
        head = NULL;
    }
    Node *ptr = head;
    while (ptr->next->next != NULL){
        ptr = ptr->next;
    }
    Node *tmp = ptr->next;
    ptr->next = NULL;
    free(tmp);
    tmp = NULL;
}

Node *delete_at_beginning(Node *head)
{
    if (!head)
    {
        printf("Linked list is empty\n");
    }
    if (head->next == NULL){
        free(head);
        head = NULL;
    }
    Node *tmp = head;
    head = head->next;
    free(tmp);
    tmp = NULL;

    return (head);
}

void deleting_at_particular_position(Node *head, int position)
{
    Node *ptr = head;
    position--;
    while (position != 1)
    {
        ptr = ptr->next;
        position--;
    }
    Node *tmp = ptr->next;
    ptr->next = tmp->next;
    free(tmp);
    tmp = NULL;
    
}

Node *delete_entire_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        tmp = tmp->next;
        free(head);
        head = tmp;
    }
    return head;
}

Node *reverse_linked_list(Node *head)
{
    Node *prev_n = NULL;
    Node *next_n = NULL;

    while (head != NULL)
    {
        next_n = head->next;
        head->next = prev_n;
        prev_n = head;
        head = next_n;
    }

    head = prev_n;
    return head;
}

int checking_list_for_loop(Node *head)
{
    Node *fast = head->next->next;
    Node *slow = head->next;

    while (slow && fast && fast->next && fast->next->next)
    {
        if (fast == slow)
        {
            return 1;
        }
        slow = slow->next;
        fast = fast->next->next;
    }

    return 0;
}