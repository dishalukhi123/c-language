#include <stdio.h>

int main()
{
    int i, val, evensum = 0, oddsum = 0;

    for (i = 1; i <= 10; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &val);

        if (val % 2 == 0)
        {
            // printf("Even number: %d\n", val);
            evensum++;
        }
        else
        {
            // printf("Odd number: %d\n", val);
            oddsum++;
        }
    }

    printf("Total even numbers: %d\n", evensum);
    printf("Total odd numbers: %d\n", oddsum);
    return 0;
}
