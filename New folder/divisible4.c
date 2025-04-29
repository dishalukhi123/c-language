#include<stdio.h>
int main()
{
    int a;

    printf("Enter a number :");
    scanf("%d",&a);

    if (a %5==0)
    {
        printf("divisble");
    }else{
        printf("not divisble");
    }
    
    
    return 0;
}
