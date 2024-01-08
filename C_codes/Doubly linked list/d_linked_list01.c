#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
}Node;

int main(void)
{
    Node *head = NULL;

    head = malloc(sizeof(Node));
    head->prev = NULL;
    head->data = 100;
    head->next = NULL;

    printf("%d\n", head->data);

    free(head);
    return (0);
}