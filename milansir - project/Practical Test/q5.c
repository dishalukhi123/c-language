#include <stdio.h>

int main()
{
    int i, j, value;

    for (i = 1; i <= 5; i++)
    {
        value = (11 - i) * (11 - i); 
        for (j = 1; j <= i; j++)
        {
            printf("%d ", value);
        }
        printf("\n");
    }

    return 0;
}
