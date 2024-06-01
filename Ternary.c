#include <stdio.h>

int main(void){ 
    
    int num1 = 2;
    int num2 = 5;
    int maxnum = (num1 > num2) ? num1 : num2;
    printf("you maxnum is: %d \n", maxnum);
    return 0;
}