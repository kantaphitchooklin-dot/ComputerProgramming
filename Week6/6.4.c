#include <stdio.h>

int main() {
    int n;
    printf("Enter : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {         
        for (int j = 0; j < n; j++) {    
            int value = (i + j) % n + 1;
            printf("%d", value);
        }
        printf("\n");
    }

    return 0;
}
