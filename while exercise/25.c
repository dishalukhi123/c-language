#include <stdio.h>

int main()
{
    int num, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    printf("Sum of factors of %d is: %d\n", num, sum);

    return 0;
}
