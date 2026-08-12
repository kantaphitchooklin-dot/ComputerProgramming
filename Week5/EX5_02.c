#include <stdio.h>
#include <ctype.h> 

int main() {
    char name[500];
    int k = 0;

    printf("Enter your name : ");
    scanf("%s", name);

    while (name[k] != '\0') {
        k++;
    }

    for (int i = k - 1; i >= 0; i--) {
        printf("%c\n", toupper(name[i]));
    }

    printf("Name length : %d\n", k);

    return 0;
}
