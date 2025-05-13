#include <stdio.h>

int main()
{
    int i, term = 1, diff = 2;

    for (i = 1; i <= 10; i++)
    {
        printf("%d ", term);
        term += diff;
        diff += 2;
    }

    printf("\n");
    return 0;
}
