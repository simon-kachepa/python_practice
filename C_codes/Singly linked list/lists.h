#ifndef MAIN_HEADER
#define MAIN_HEADER

#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}Node;

void add_node_at_end(Node *head, int data);

#endif /* MAIN_HEADER */