/* Build a message using safe string functions*/

#include <stdio.h>
#include <string.h>

int main(void){
    /* print username*/
    printf("what is your name?");

    char name[2];
    scanf("%39s", name);
    printf("name pointer: %p\n", name);

    char msg[100];
    
    strcpy(msg, name);
    strcat(msg, " is ");
    strcat(msg, "learning C.");
    printf("msg pointer:  %p\n", msg);
    printf("delta:  %i\n", msg - name);

    puts(msg);

    printf("please enter your string: ");
    char str[40];
    scanf("%39s", str);

    int len = strlen(str);
    int size = sizeof(str);
    
    printf("\nlength = %d; size = %d\n", len, size);

    return 0;

}