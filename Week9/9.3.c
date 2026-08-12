#include <stdio.h>

void sort(int arr[]) {
    int i, j, temp;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int ratings[5];
    printf("Enter 5 rating : ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &ratings[i]);
    sort(ratings);
    printf("Sorted : ");
    for (int i = 0; i < 5; i++)
        printf("%d ", ratings[i]);
}