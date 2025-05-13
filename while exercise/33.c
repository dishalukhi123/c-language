#include <stdio.h>

int main()
{
    int val, fd = 0, ld = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &val);

    ld = val % 10;

    temp = val;
    while (temp >= 10)
    {
        temp = temp / 10;
    }
    fd = temp;

    printf("Sum of first and last digits: %d\n", fd + ld);

    return 0;
}
