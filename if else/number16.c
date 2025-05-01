#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter a number of A :");
    scanf("%d",&a);
    printf("Enter a number of B :");
    scanf("%d",&b);
    printf("Enter a number of c :");
    scanf("%d",&c);

    if (a > b && b > c && a > c)
    {
        printf("A is max");
    }else if (b > a && b > c && c > a )
    {
        printf("B is max");
    }else if (a == b && b == c && a == c)
    {
        printf("All are sem");
    }else{
        printf("C is max");
    }
    
    
    
    return 0;
}