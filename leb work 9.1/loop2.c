#include<stdio.h>
int main()
{
    int i = 1, range;

    printf("Enter number of range: ");
    scanf("%d\n", &range);

    while (i >= range)
    {
        printf("%d ", i);
        i--;
    }

    return 0;
}
