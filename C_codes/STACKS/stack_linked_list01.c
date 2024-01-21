#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *link;
}Node;

Node *top = NULL;

void print(void);
void push(int data);
int pop(void);
int isEmpty(void);
int peek(void);

int main(void)
{

    push(20);
    push(90);
    push(67);
    print();
    pop();
    print();

    return (0);
}

void print(void)
{
    Node *ptr;

    ptr = top;
    if (isEmpty())
    {
        printf("Stack underflow\n");
        exit(1);
    }
    printf("Stack Element(s): ");
    while (ptr)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
}

void push(int data)
{
    Node *new_node = malloc(sizeof(Node));

    if (!new_node)
    {
        printf("Stack overflow\n");
        exit(1);
    }
    new_node->data = data;
    new_node->link = NULL;

    new_node->link = top;
    top = new_node;
}

int pop(void)
{
    int value;

    Node *tmp = top;

    if (isEmpty())
    {
        printf("Stack underflow\n");
        exit(1);
    }
    value = tmp->data;
    top = top->link;
    free(tmp);
    tmp = NULL;

    return (value);
}

int isEmpty(void)
{
    if (top == NULL)
        return (1);
    else
        return (0);
}

int peek(void)
{
    int top_element;
    if (isEmpty())
    {
        printf("Stack underflow\n");
        exit(1);
    }
    top_element = top->data;

    return (top_element); 
}