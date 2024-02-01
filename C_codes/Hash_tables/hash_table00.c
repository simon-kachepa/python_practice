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
    return 5;
}

int main(void)
{
    printf("Jacob->%u\n", hash("Jacob"));
    printf("Micheal->%u\n", hash("Micheal"));
    printf("Captain->%u\n", hash("Captain"));
    printf("Zviko->%u\n", hash("Zviko"));

    return (0);
}