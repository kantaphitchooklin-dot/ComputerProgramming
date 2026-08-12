#include <stdio.h>

int main(){
    int num1,num2;
    int start , end , sum = 0;

    printf(" *** Display Summation ***\n");
    printf("Enter 2 whole numbers : ");
    scanf("%d %d", &num1, &num2);

    if (num1 < num2) {
        start = num1;
        end = num2;
    } else {
        start = num2;
        end = num1;
    }

    printf("Summation = ");
    for (int i = start; i <= end; i++){
        sum += i;
        printf("%d", i);
        if (i < end)
            printf(" + ");
    }
    printf(" = %d\n", sum);

    return 0;
}