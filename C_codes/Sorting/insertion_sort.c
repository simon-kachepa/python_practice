#include <stdio.h>

void insertion_sort(int arr[], int n);
void printArray(int arr[], int size);
int main(void)
{
    int my_arr[] = {90, 7, 8, 24, 1, 80};
    int arr_size = sizeof(my_arr)/ sizeof(my_arr[0]);

    insertion_sort(my_arr, arr_size);
    printf("Sorted array: ");
    printArray(my_arr, arr_size);
    return 0;
}

void insertion_sort(int arr[], int n)
{
    int i, j;

    for (i = 1; i < n; i++)
    {
        int tmp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > tmp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j + 1] = tmp;
    }
    
}


void printArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
}