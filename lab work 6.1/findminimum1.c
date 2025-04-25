#include <stdio.h>
int main()
{
    int a, b;

    printf("Enter a number of A :");
    scanf("%d", &a);

    printf("Enter a number of b :");
    scanf("%d", &b);

    if (a > b)
    {
        printf("B is minimum");
    }
    else
    {
        printf("A is minimum");
    }

    return 0;
}
