#include <stdio.h>
#include <string.h>

int main(void){

    char password[20];
   
    printf(" enter your password: ");
    scanf("%19s", password);

    if (strcmp(password, "Nangsa98") == 0) {
        printf("correct password! \n");
    } else {
        printf("wrong password! try again! \n");
    } 
    return 0;
}