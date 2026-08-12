#include <stdio.h>

int main() {
    char ch;

    printf("Enter 1 alphabet : ");
    scanf("%c", &ch);
    
    printf("The ascii of '%c' is %d\n", ch, ch);

    return 0;
}
