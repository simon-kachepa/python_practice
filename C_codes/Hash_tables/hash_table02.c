#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

#define MAX_NAME 256
#define TABLE_SIZE 10

typedef struct Person{
    char name[MAX_NAME];
    int age;
}Person;

unsigned int hash(char *name){
    unsigned int name_length = strnlen(name, MAX_NAME);
    unsigned int hash_value = 0;
    for (int i = 0; i < name_length; i++)
    {
        hash_value = hash_value + name[i];
        /*Adding more randomness to our hash function*/
        hash_value = (hash_value * name[i]) % TABLE_SIZE;
    }
    return hash_value;
}

int main(void)
{
    printf("Jacob->%u\n", hash("Jacob"));
    printf("Micheal->%u\n", hash("Micheal"));
    printf("Captain->%u\n", hash("Captain"));
    printf("Zviko->%u\n", hash("Zviko"));
    printf("Rangarirai->%u\n", hash("Zviko"));
    printf("Munyarad->%u\n", hash("Zviko"));
    printf("Milton->%u\n", hash("Zviko"));
    printf("Pamela->%u\n", hash("Zviko"));
    printf("Tinotenda->%u\n", hash("Zviko"));

    return (0);
}