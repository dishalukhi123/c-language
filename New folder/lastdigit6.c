#include<stdio.h>
int main()
{
    int val,x;

    printf("Enter any number : ");
    scanf("%d",&val);

    x = val % 10;
    printf("your last digit is ..%d",x);

    
    return 0;
}
