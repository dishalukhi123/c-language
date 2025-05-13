#include <stdio.h>

int main()
{
    int i, val, pos_sum = 0, neg_sum = 0, zero_count = 0;

    for (i = 1; i <= 10; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &val);

        if (val > 0)
        {
            pos_sum ++;
        }
        else if (val < 0)
        {
            neg_sum ++ ;
        }
        else
        {
            zero_count++;
        }
    }

    printf("Sum of positive numbers: %d\n", pos_sum);
    printf("Sum of negative numbers: %d\n", neg_sum);
    printf("Count of zero values: %d\n", zero_count);

    return 0;
}
