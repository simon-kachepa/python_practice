#include <stdio.h>

void selection_sort(int arr[], int n);
void swap_elements(int* arr, int i, int j);
void printArray(int arr[], int size);
int main(void)
{
    int my_arr[] = {90, 7, 8, 24, 1, 80};
    int arr_size = sizeof(my_arr)/ sizeof(my_arr[0]);

    selection_sort(my_arr, arr_size);
    printf("Sorted array: ");
    printArray(my_arr, arr_size);
    return 0;
}

void selection_sort(int arr[], int n)
{
    int index, j, min;

    for (index = 0; index < n-1; index++)
    {
        min = index;
        for (j = index + 1; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        if (index != min)
        {
            swap_elements(arr, index, min);
        }
    }
}

void swap_elements(int* arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void printArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
}