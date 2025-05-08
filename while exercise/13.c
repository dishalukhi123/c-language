#include <stdio.h>
int main()
{
    int i=1, val;

    // printf("Enter a number");
    // scanf("%d", &val);
    for (i = 1; i <= 10; i++)
    {
        printf("Enter a number :");
        scanf("%d", &val);

        if (val % 2 != 0)
        {
            printf("Odd numbers :-%d\n",val);
        }
        

    }

    return 0;
}
