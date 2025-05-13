#include <stdio.h>
int main()
{
    int i = 1, val = 0;

    printf("Enter number :-");
    scanf("%d",&val);

    for (i = 1; i < val; i++)
    {
        if (i * i == val)
        {
            printf("square %d", i);
            break;
        }
    }

    return 0;
}
