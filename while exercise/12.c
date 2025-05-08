#include <stdio.h>
int main()
{
    int i, evensum=0, oddsum=0;

    // printf("Enter a number");
    // scanf("%d", &val);
    for (i = 1; i <= 20; i++)
    {
        if (i % 2 == 0)
        {
            evensum += i;
        }
        else
        {

            oddsum += i;
        }
    }

    printf("even %d\n", evensum);
    printf("odd %d", oddsum);

    return 0;
}
