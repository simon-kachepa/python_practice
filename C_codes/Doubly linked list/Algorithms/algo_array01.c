#include <stdio.h>
#include <string.h>

int main(void)
{
    int my_arr[] = {10, 67, 11, 7, 0, 78};
    unsigned long arr_len = sizeof(my_arr)/ sizeof(my_arr[0]);

    printf("%lu\n", arr_len);

    for (int i = 0; i < arr_len; i++)
    {
        if (my_arr[i] == 78)
        {
            printf("%d Found\n", my_arr[i]);
            return (1);
        }
    }
    printf("%d Not Found\n", 78);
    return (0);
}