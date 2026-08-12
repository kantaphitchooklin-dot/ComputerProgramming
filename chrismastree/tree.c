#include <stdio.h>

int main() {
    int height = 20; 
    int trunkHeight = 5;  
    int trunkWidth = 5;   
    int i, j;

    for (i = 0; i < height; i++) {
        for (j = 0; j < height - i - 1; j++) {
            printf(" ");
        }
        for (j = 0; j < (2 * i + 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = 0; i < trunkHeight; i++) {
        for (j = 0; j < height - trunkWidth / 2 - 1; j++) {
            printf(" ");
        }
        for (j = 0; j < trunkWidth; j++) {
            printf("|");
        }
        printf("\n");
    }

    return 0;
}
