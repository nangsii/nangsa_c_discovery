#include <stdio.h>
#include <string.h>


int main(void){

    char str[] = "ChenNangsa";
    printf("String: \"%s\" \n", str);

    int len = 0;
    while (str[len] != '\0'){
        len++;
    }
    printf("Length: %d" , len);
    putchar('\n');
    return 0;
}