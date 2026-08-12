#include <stdio.h>

int main()
{
    int x, i, j;

    printf("Enter a number (1-16) : ");
    scanf("%d", &x);

    if (x >= 1 && x <= 16)
    {
        for (i = x; i >= 1; i--)
        {
            printf("%X", i);
        }
        printf("\n");

        for (i = 0; i < x - 2; i++)
        {
            for (j = x; j >= 1; j--)
            {
                if (j == x || j == 1)
                    printf("%X", j);
                else
                    printf(" ");
            }
            printf("\n");
        }

        if (x > 1)
        {
            for (i = x; i >= 1; i--)
            {
                printf("%X", i);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Out of range ! ! !\n");
    }

    return 0;
}