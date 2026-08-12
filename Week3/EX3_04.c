#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf(" *** Get input from keyboard as string *** \n");
    printf("Please input a string : ");
    fgets(str, sizeof(str), stdin);  

    str[strcspn(str, "\n")] = '\0';

    printf("string : %s\n", str);

    char sub1[8];
    strncpy(sub1, str, 7);
    sub1[7] = '\0';
    printf("string : %s\n", sub1);

    char sub2[16];
    strncpy(sub2, str, 15);
    sub2[15] = '\0';
    printf("string : %s\n", sub2);

    return 0;
}
