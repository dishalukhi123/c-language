#include <stdio.h>
int main()
{
    int i, sum = 0;

    for (i = 1; i <= 5; i++)
    {
        printf("%d ", i);
        sum += i;
    }

    printf("\nSum = %d\n", sum);
}
