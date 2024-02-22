#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int arr[], int n);
void printArray(int arr[], int size);
int main(void)
{
    int my_arr[] = {90, 7, 8, 24, 1, 80};
    int arr_size = sizeof(my_arr)/ sizeof(my_arr[0]);

    bubble_sort(my_arr, arr_size);
    printf("Sorted array: ");
    printArray(my_arr, arr_size);
    return 0;
}

void bubble_sort(int *arr, int n)
{
    int sorted_elements, index;

    for (sorted_elements = 0; sorted_elements < n - 1; sorted_elements++)
    {
        for (index = 0; index < n - sorted_elements - 1; index++)
        {
            if (arr[index] > arr[index + 1])
            {
                /*Swapping the elements*/
                int tmp = arr[index];
                arr[index] = arr[index + 1];
                arr[index + 1] = tmp;
            }
            printArray(arr, n);
        }
    }
}

void printArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
}
