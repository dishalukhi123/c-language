#include <stdio.h>
int main()
{
    int a;
    printf("Enter value :");
    scanf("%d", &a);

    if (a > 0)
    {
        if (a < 0)
        {
            printf("positive number :");
        }
        else
        {
            printf("zero number :");
        }
    }
    else
    {
        printf("negative number :");
    }
    

    return 0;
}
