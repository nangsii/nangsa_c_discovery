#include <stdio.h>
#include <string.h>

int main(void){
    char ans[10];
    int i = 0;
    do {
        i++;
        printf("Iteration: #%d\n", i);
        printf("wanna continue? [no for quit]");
        scanf("%9s", ans);
    } while (strcmp(ans, "no") != 0);
    return 0;
}