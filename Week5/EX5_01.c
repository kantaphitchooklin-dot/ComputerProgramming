#include <stdio.h>

int main() {
    int number, count;
    int sum = 0;

    printf("Enter 'number' and 'count' : ");
    scanf("%d %d", &number, &count);

    if (count <= 1) {
        printf("I can move on\n");
    } else {
        for (int i = 0; i < count; i++) {
            sum += number;
            printf("%d", number);
            if (i < count - 1) {
                printf(" + ");
            }
        }
        printf(" = %d\n", sum);
    }

    return 0;
}
