#include <stdio.h>
int main()
{
    int i = 1, sum, val;

    for (i = 1; i <= 20; i++)
    {
        printf("Enter a number :");
        scanf("%d", &val);
        sum += val;
        i++;
    }
    printf("%d",sum);

    return 0;
}
