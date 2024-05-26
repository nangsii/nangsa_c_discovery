/* Fahrenheit to Temperature Converter */

#include <stdio.h>

int main(void) {
    printf(" Enter a Temperature Value in Fahrenheit:");
    float temperatureF;
    scanf("%f", &temperatureF);
    float temperatureC = (temperatureF - 32) * 5 / 9;
    printf("corresponding temperature in C is %.2f C. \n", temperatureC);
    return 0;

}