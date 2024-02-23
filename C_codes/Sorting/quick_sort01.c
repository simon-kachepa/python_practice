#include <stdio.h>

int partion(int array[], int lower_bound, int upper_bound);
void lux_sort(int arr[], int lower_bound, int upper_bound);
void quick_sort(int array[], int size);
void swap_elements(int array[], int i, int j);
void print_array(const int *array, size_t size);

int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    quick_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}

int partition(int array[], int lower_bound, int upper_bound)
{
    int start = lower_bound;
    int end = upper_bound;
    int pivot = array[upper_bound];
    while (start < end)
    {
        while (array[start] <= pivot)
        {
            start++;
        }
        while (end >= 0 && array[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            swap_elements(array, start, end);
            print_array(array, upper_bound + 1);
        }
    }
    swap_elements(array, upper_bound, end);
    print_array(array, upper_bound + 1);
    return (end);
    
}

void swap_elements(int array[], int i, int j)
{
    int tmp = array[i];
    array[i] = array[j];
    array[j] = tmp;
}

void quick_sort(int array[], int size)
{

    lux_sort(array, 0, size - 1);

}
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}

void lux_sort(int arr[], int lower_bound, int upper_bound)
{
    int location;
    if (lower_bound < upper_bound)
    {
        location = partition(arr, lower_bound, upper_bound);
        lux_sort(arr, lower_bound, location - 1);
        lux_sort(arr, location + 1, upper_bound);
    }

}