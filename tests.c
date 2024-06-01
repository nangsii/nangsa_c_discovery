#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    int arr[5] = {1, 2, 3, 4, 5};
    

    printf("Value at arr[2]: %d\n", *(arr + 2));
    printf("Value at arr[2]: %d\n", arr[2]);
    return 0;
}