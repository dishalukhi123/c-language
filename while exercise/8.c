#include <stdio.h>
int main()
{
    int i = 1, val;

    for (i = 1; i <= 20; i++)
    {
        printf("Enter a number :");
        scanf("%d", &val);
        if (val < 0) {
            printf("Nagitive number: %d\n", val);
        }
        i++;
    }

    return 0;
}
