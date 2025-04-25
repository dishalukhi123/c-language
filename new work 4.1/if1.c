#include<stdio.h>
int main()
{
    int a,b,c,e;

    printf("Enter a number of A :");
    scanf("%d",&a);

    printf("Enter a number of B :");
    scanf("%d",&b);
    
    printf("Enter a number of C :");
    scanf("%d",&b);

    printf("Enter a number of E :");
    scanf("%d",&e);

    if (a > b)
    {
        if (a > c)
        {
            printf("A is max");
        }else{
            printf("C is max");
        }
        if (b > c)
        {
            printf("B is max");
        }else{
            printf("C is max");
        }
        
    }if (e > c)
    {
        printf("E is max");
    }else{
        printf("C is max");
    }
    return 0;
}
