#include <stdio.h>

int main() {
    int num1, num2;

    printf(" *** Max & Min *** \n");
    printf("Enter 2 numbers : ");
    scanf("%d %d", &num1, &num2);

    if ((num1 < 1 || num1 > 100) || (num2 < 1 || num2 > 100)) {
        printf("OUT OF RANGE.\n");
    } else if (num1 == num2) {
        printf("Equals.\n");
    } else if (num1 > num2) {
        printf("Max : %d\n", num1);
        printf("Min : %d\n", num2);
    } else {
        printf("Max : %d\n", num2);
        printf("Min : %d\n", num1);
    }

    return 0;
}
