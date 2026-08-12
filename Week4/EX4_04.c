#include <stdio.h>

int main() {
    int a, b, c;
    int sum;

    printf("Enter 3 Number : ");
    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;

    printf("ANSWER = %d\n", sum);

    if (sum % 2 == 0) {
        printf("EVEN\n");
    } else {
        printf("ODD\n");
    }

    return 0;
}
