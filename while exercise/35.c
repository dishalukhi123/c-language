#include <stdio.h>

int main()
{
    int num, first, second;

    printf("Enter a number: ");
    scanf("%d", &num);

    first = num;
    while (first >= 10)
    {
        first = first / 10;
    }

    second = (num / 10) % 10;

    printf("Sum of first and second digits: %d\n", first + second);

    return 0;
}
