#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char text[1000];

    printf("Enter a string : ");
    fgets(text, sizeof(text), stdin);

    text[strcspn(text, "\n")] = '\0';

    printf("Capital : ");
    for (int i = 0; text[i]; i++) {
        printf("%c", toupper(text[i]));
    }
    printf("\n");

    printf("Small : ");
    for (int i = 0; text[i]; i++) {
        printf("%c", tolower(text[i]));
    }
    printf("\n");

    printf("Title : ");
    int newWord = 1;
    for (int i = 0; text[i]; i++) {
        if (isspace(text[i])) {
            newWord = 1;
            printf("%c", text[i]);
        } else {
            if (newWord) {
                printf("%c", toupper(text[i]));
                newWord = 0;
            } else {
                printf("%c", tolower(text[i]));
            }
        }
    }
    printf("\n");

    return 0;
}
