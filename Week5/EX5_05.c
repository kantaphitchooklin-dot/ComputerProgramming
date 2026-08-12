#include <stdio.h>

int main() {
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("</3\n");
    } 
    else {
        for (int i = 0; i < n; i++) 
        {
            printf("I Miss You\n");
        }
    }

    return 0;
}
