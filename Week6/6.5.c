#include <stdio.h>

int main() {
    int n, a, b, count = 0;

    printf(" *** Find Solution a*a*b = n ***\n");
    printf("Enter n : ");
    scanf("%d", &n);

    for (a = 1; a <= n; a++) {
        for (b = 1; b <= n; b++) {
            if (a * a * b == n) {
                count++;
                printf("  %d. (a,b) = (%d,%d)\n", count, a, b);
            }
        }
    }

    printf("There are %d solution(s).\n", count);
    return 0;
}
