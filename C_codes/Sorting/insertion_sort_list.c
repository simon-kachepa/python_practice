#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;


/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
/**
 * create_listint - Creates a doubly linked list from an array of integers
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */
listint_t *create_listint(const int *array, size_t size)
{
    listint_t *list;
    listint_t *node;
    int *tmp;

    list = NULL;
    while (size--)
    {
        node = malloc(sizeof(*node));
        if (!node)
            return (NULL);
        tmp = (int *)&node->n;
        *tmp = array[size];
        node->next = list;
        node->prev = NULL;
        list = node;
        if (list->next)
            list->next->prev = list;
    }
    return (list);
}
void insertion_sort_list(listint_t **list);
size_t list_size(listint_t *list);

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    listint_t *list;
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    list = create_listint(array, n);
    if (!list)
        return (1);
    print_list(list);
    printf("\n");
    size_t size = list_size(list);
    printf("%zu\n", size);
    // insertion_sort_list(&list);
    // printf("\n");
    // print_list(list);
    return (0);
}

void insertion_sort_list(listint_t **list)
{
    listint_t *ptr = list;
    listint_t *head = *list;
    
    while (ptr != NULL && ptr->next != NULL)
    {
        int tmp = ptr->n;
        while (head->prev && head->n > tmp)
        {
            head->next->n = head->n;
        }


    }
}

size_t list_size(listint_t *list)
{
    size_t count = 0;
    listint_t *ptr = list;

    if (!ptr)
        return (0);
    if (ptr->next == NULL)
        return (1);

    while (ptr != NULL)
    {
        ptr = ptr->next;
        count += 1;
    }
    return (count);
}