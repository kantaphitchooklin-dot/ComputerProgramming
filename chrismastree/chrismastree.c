#include <stdio.h>

int main() {
    int sections = 4;         
    int baseHeight = 4;       
    int i, j, k;

    for (k = 0; k < sections; k++) {
        int height = baseHeight + k; 

        for (i = 0; i < height; i++) {
            for (j = 0; j < (sections + baseHeight + sections - i - k); j++) {
                printf(" ");
            }

            for (j = 0; j < 2 * i + 1 + 2 * k; j++) {
                printf("*");
            }
            printf("\n");
        }
    }

    int trunkHeight = 5;
    int trunkWidth = 5;
    int totalWidth = 2 * (baseHeight + sections + sections - 1) + 1;

    for (i = 0; i < trunkHeight; i++) {
        for (j = 0; j < (totalWidth - trunkWidth) / 2; j++) {
            printf(" ");
        }
        for (j = 0; j < trunkWidth; j++) {
            printf("|");
        }
        printf("\n");
    }

    return 0;
}
