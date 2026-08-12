#include <stdio.h>

int main() {
    char text[100];
    int i = 0;

    printf(" *** To Lower Case *** \n");
    printf("Enter a string : ");
    fgets(text, sizeof(text), stdin);

    printf("Output : ");

    while (text[i] != '\0') {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            printf("%c", text[i] + 32);
        } else {
            printf("%c", text[i]);
        }
        i++;
    }

    return 0;
}
