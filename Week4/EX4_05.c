#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;

    printf("A is +\nB is -\nC is *\nD is /\n");
    printf("Enter number and operator : ");
    scanf("%f %c %f", &num1, &op, &num2);

    float big = (num1 > num2) ? num1 : num2;
    float small = (num1 > num2) ? num2 : num1;

    switch(op) {
        case 'A':
            result = big + small;
            printf("%.0f+%.0f = %.3f\n", big, small, result);
            break;
        case 'B':
            result = big - small;
            printf("%.0f-%.0f = %.3f\n", big, small, result);
            break;
        case 'C':
            result = big * small;
            printf("%.0f*%.0f = %.3f\n", big, small, result);
            break;
        case 'D':
            if (small == 0) {
                printf("Error: Cannot divide by zero.\n");
            } else {
                result = big / small;
                printf("%.0f/%.0f = %.3f\n", big, small, result);
            }
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
