#include <stdio.h>
#include <string.h>

int main(void)
{
    char *str_arr[] = {"Simon", "Hardon", "Simeon", "Captain", "Ranga"};
    unsigned long arr_len = sizeof(str_arr)/ sizeof(str_arr[0]);

    printf("%lu\n", arr_len);

    for (int i = 0; i < arr_len; i++)
    {
        if (strcmp(str_arr[i], "Simeon") == 0)
        {
            printf("%s Found\n", str_arr[i]);
            return (1);
        }
    }
    printf("%d Not Found\n", 78);
    return (0);
}