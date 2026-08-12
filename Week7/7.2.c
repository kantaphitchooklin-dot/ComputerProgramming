#include <stdio.h>

float calculate(int prize, float tax) ;

int main() {
    float tax1, tax2;
    int prize1, prize2;

    printf("Enter 2 prizes and 2 coupons : ");
    scanf("%d %d %f %f", &prize1, &prize2, &tax1, &tax2);

    float taxed1 = calculate(prize1, tax1);
    float taxed2 = calculate(prize2, tax2);

    printf("Item1 %d -> %.2f\n", prize1, taxed1);
    printf("Item2 %d -> %.2f\n", prize2, taxed2);

    if (taxed1 < taxed2)
        printf("* Item1 is cheaper\n");
    else if (taxed1 == taxed2)
        printf("* Item1 is equal to Item2\n");
    else
        printf("* Item2 is cheaper\n");

    return 0;
}

float calculate(int prize, float tax) {
    return prize + (prize * tax / 100);
}