#include<stdio.h>
int main()
{
    int a;

    printf("Enter a number :");
    scanf("%d",&a);

    if (a %5==0)
    {
        printf("5 divisble");
    }else if ( a %11==0)
    {
        printf("11 divisble");
    }else
    {
        printf("not divisble");
    }
    
    
    return 0;
}
