#include <stdio.h>
int main()
{
    int a, b, c, d;

    printf("Enter a number of A :");
    scanf("%d", &a);

    printf("Enter a number of B :");
    scanf("%d", &b);

    printf("Enter a number of C :");
    scanf("%d", &c);

    printf("Enter a number of D :");
    scanf("%d", &d);

    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                printf("a is big");
            }
            else
            {
                printf("d is big");
            }
        }
        else
        {
            if(c>d)
            {
                printf("c is big");
            }
            else
            {
                printf("d is big");
            }
        }
    } 
    else
    {
        if(b>c)
        {
            if((b>d))
            {
                printf("b is big");
            }
            else
            {
                printf("d is big");
            }
        }
        else
        {
            if(c>d)
            {
                printf("c is big");
            }
            else
            {
                printf("d is big");
            }
        }
    }

    // if (a > b)
    // {
    //     if (a > c)
    //     {
    //         printf("A is max");
    //     }else{
    //         printf("C is max");
    //     }
    //     if (b > c)
    //     {
    //         printf("B is max");
    //     }else{
    //         printf("C is max");
    //     }
    //     if (b > c)
    //     {
    //         printf("A is max");
    //     }else{
    //         printf("C is max");
    //     }
    //     if (b > c)
    //     {
    //         printf("B is max");
    //     }else{
    //         printf("C is max");
    //     }
    // }
    return 0;
}
