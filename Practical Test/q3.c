#include <stdio.h>

int reverseNumber(int num)
{
    int rev = 0;
    while (num > 0)
    {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }
    return rev;
}

int main()
{
    int num;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    if (num >= 100 && num <= 999)
    {
        printf("Reversed number is: %d\n", reverseNumber(num));
    }
    else
    {
        printf("Not a 3-digit number.\n");
    }

    return 0;
}
