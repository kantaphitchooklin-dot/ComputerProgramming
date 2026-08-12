#include <stdio.h>

int main() {
    int number;

    printf("Enter lottery number : ");
    scanf("%d", &number);

    printf("Jackpot : %06d\n", number);         
    printf("+1      : %06d\n", number + 1);     
    printf("-1      : %06d\n", number - 1);     

    
    printf("First 3 : %03d\n", number / 1000);  
   
    printf("Last 3  : %03d\n", number % 1000);  

    return 0;
}
