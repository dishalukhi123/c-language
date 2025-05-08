#include <stdio.h>

int main()
{
    int i, val;

    for (i = 1; i <= 10; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &val);

        if (i % 2 == 0)
        {
            printf("even numbers :-%d\n", val);
        }
        else
        {
            
        }
    }

    return 0;
}
