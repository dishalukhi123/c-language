#include <stdio.h>
int main()
{
    int i, val,sum;

    for (i = 1; i <= 10; i++)
    {
        printf("Enter a number :");
        scanf("%d", &val);

        if (i % 2 != 0)
        {
            printf("Odd numbers :-%d\n",val);
            sum ++;
        }
        printf("%d\n",sum);
        i++;
        

    }

    return 0;
}
