#include <stdio.h>
#include <string.h>

typedef struct person
{
    char *name;
    char *phone;
} person;

int main(void)
{
    person people[3];

    people[0].name = "Simon";
    people[0].phone = "+263-77-650-7735";

    people[1].name = "Captain";
    people[1].phone = "+263-78-869-1310";

    people[2].name = "McDONALD";
    people[2].phone = "+263-78-494-0165";

    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, "Captain") == 0)
        {
            printf("%s -> %s\n", people[i].name, people[i].phone);
            return (1);
        }
    }
    printf("That person Not Found\n");
    return (0);
}