#include <stdio.h>

int main()
{
    int i, j, space;

    for (i = 5; i >= 1; i--)
    {
        for (space = 0; space < 5 - i; space++)
        {
            printf("  ");
        }

        for (j = 1; j <= i; j++)
        {
            if (j % 2 == 1)
                printf("1 ");
            else
                printf("0 ");
        }

        printf("\n");
    }

    return 0;
}
