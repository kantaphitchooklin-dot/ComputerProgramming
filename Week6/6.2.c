#include <stdio.h>

int main() {
    int n;
    int count = 0;
    int current = 9;

    printf("input (1-20)  : ");
    scanf("%d", &n);
    printf("\n");

    if (n < 1 || n > 20) {
        printf("No Answer");
        return 0;
    }

    while (count < n * n ) {
        
        if (n >= 1) printf(" ");  

        for (int i = 0; i < n; i++) {
            if (count >= n * n)
                break;

            printf("%2d ", current);  
            current--;
            if (current < 1)
                current = 9;

            count++;
        }

        printf("\n");
    }

    return 0;
}