#include <stdio.h>

int main()
{
    int num, i;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (i = num - 1; i >= 1; i--)
    {
        if (num % i == 0)
        {
            printf("Highest factor of %d is: %d\n", num, i);
            break; 
        }
    }

    return 0;
}
