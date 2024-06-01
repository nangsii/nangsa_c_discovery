#include <stdio.h>
#include <malloc.h>
int main(void){
    int* px;
    for (int i = 1; i <= 10; i++){
        //int x = 1;
        int* py = malloc(sizeof(int));
        px = py;
        for (int j = 1; j <=10; j++) 
        {
            printf("%3d", (i*j));
        }
        putchar('\n');
    }

    *px = 3;
    free(px);
    return 0;
}
