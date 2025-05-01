#include <stdio.h>

int main()
{
    int num1, num2, ax, bx;

    printf("Enter one integers: ");
    scanf("%d", &num1);
    printf("Enter two integers: ");
    scanf("%d", &num2);

    if (num1 == num2)
    {
        printf("Zero\n");
    }
    else
    {
        if (num1 > 100)
        {
            ax = num1 - 100;
        }
        else
        {
            ax = 100 - num1;
        }
        if (num2 > 100)
        {
            bx = num2 - 100;
        }
        else
        {
            bx = 100 - num2;
        }

        if (ax < bx)
        {
            printf("num1 is nearest ");
        }
        else if (bx < ax)
        {
            printf("num2 is nearest\n");
        }
        else
        {
            printf("both have sem");
        }
    }

    return 0;
}
