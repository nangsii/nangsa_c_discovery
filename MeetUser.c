#include <stdio.h>

int main(void) {
    printf("what is your name?");
    char name[40];
    scanf( "%39s" , name);

    printf("\n");
    printf("nice to meet you, %s!\n", name);

    return 0;
}