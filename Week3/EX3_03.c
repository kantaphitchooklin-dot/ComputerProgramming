#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf(" *** Convert Fahrenheit to Celcius *** \n");
    printf("Enter temperature in degree Fahrenheit : ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("%.2f degree Fahrenheit equals %.2f degree celcius.\n", fahrenheit, celsius);

    return 0;
}
