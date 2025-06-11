#include <stdio.h>

int main()
{
    int i = 1, range;

    printf("Enter number of range: ");
    scanf("%d", &range);  

    while (i <= range)
    {
        if (i % 2 == 0)  
        {
            printf("%d ", i);
        }
        i++;
    }

    return 0;
}
