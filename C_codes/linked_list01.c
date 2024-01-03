#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{

    int data;
    struct Node *next;

}Node;

void add_node(Node *head, int data);
int main(void)
{
    Node *head = NULL;

    head = malloc(sizeof(struct Node));
    head->data = 90;
    head->next = NULL;

    Node *current = malloc(sizeof(struct Node));
    current->data = 100;
    current->next = NULL;
    head->next = current;

    add_node(head, 200);
    add_node(head, 500);
    Node *ptr;
    ptr = head;
    while(ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }

    free(current);
     free(head);

    return (0);
}

void add_node(Node *head, int data)
{
    Node *current = malloc(sizeof(Node));
    current->data = data;
    current->next = NULL;
    if (head != NULL)
        head = head->next;
    head->next = current;

}