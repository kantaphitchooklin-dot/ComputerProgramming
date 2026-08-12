#include <stdio.h>

void add_money_from_wallet(int *wallet, int money);

int main()
{
    int wallet = 20, income;
    printf("Enter money : ");
    scanf("%d", &income);
    add_money_from_wallet(&wallet, income);
    printf("My wallet -> %d", wallet);
}

void add_money_from_wallet(int *wallet, int money){
    *wallet += money;
}
