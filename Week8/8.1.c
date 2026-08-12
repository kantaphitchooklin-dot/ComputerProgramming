#include <stdio.h>

int main() {
    int ar[10], i, j, temp;

    printf(" *** Ascending sort ***\n");
    printf("Enter 10 whole numbers : ");

    for (i = 0; i < 10; i++) {
        scanf("%d", &ar[i]);
    }

    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (ar[i] > ar[j]) {
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }

    printf("Output : ");
    for (i = 0; i < 10; i++) {
        printf("%d ", ar[i]);
    }

    return 0;
}
