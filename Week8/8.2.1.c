#include <stdio.h>

int main() {
    int arr[10];
    int i, diff, maxDiff = 0;

    printf(" *** Maximum difference of adjacent number ***\n");
    printf("Enter 10 integers : ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 9; i++) {
        if (arr[i] - arr[i + 1] < 0) {
            diff = (arr[i + 1] - arr[i]); 
        } else {
            diff = (arr[i] - arr[i + 1]);
        }

        if (diff > maxDiff) {
            maxDiff = diff;
        }
    }

    printf("Maximum difference is %d\n", maxDiff);
    return 0;
}
