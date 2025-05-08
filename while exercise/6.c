#include <stdio.h>
int main()
{
    int i = 1, sum, val ,avg;

    for (i = 1; i <= 20; i++)
    {
        printf("Enter a number :");
        scanf("%d", &val);
        sum += val;
        avg = sum/10;
        i++;
    }
    printf("%d",avg);

    return 0;
}
