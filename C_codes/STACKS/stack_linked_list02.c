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
    int choice, data;

    while (1)
    {
        printf("\n********************** USER CHOICE **********************\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. PRINT TOPMOST ELEMENT\n");
        printf("4. PRINT ALL STACK ELEMENTS\n");
        printf("5. QUIT\n");
        printf("ENTER YOUR CHOICE HERE: ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice)
        {
            case 1:
                printf("ENTER THE DATA TO PUSH: ");
                scanf("%d", &data);
                push(data);
                break;

            case 2:
                data = pop();
                printf("THE DELETED ELEMENT IS: %d\n", data);
                break;

            case 3:
                data = peek();
                printf("THE TOPMOST ELEMENT IS: %d\n", data);
                break;

            case 4:
                print();
                break;

            case 5:
                exit(1);
                break;

            default:
                printf("INVALID CHOICE\n");
        }

    }

    return (0);
}

void print(void)
{
    Node *ptr;

    ptr = top;
    if (isEmpty())
        printf("STACK UNDERFLOW\n");
    else
    {
        printf("STACK ELEMENT(S): ");
        while (ptr)
        {
            printf("%d ", ptr->data);
            ptr = ptr->link;
        }
        printf("\n");
    }
}

void push(int data)
{
    Node *new_node = malloc(sizeof(Node));

    if (!new_node)
    {
        printf("STACK UNDERFLOW\n");
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
        printf("STACK UNDERFLOW\n");
        exit(1);
    }
    else
    {
        value = tmp->data;
        top = top->link;
        free(tmp);
        tmp = NULL;

        return (value);
    }
    
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
        printf("STACK UNDERFLOW\n");
        exit(1);
    }
    top_element = top->data;

    return (top_element); 
}