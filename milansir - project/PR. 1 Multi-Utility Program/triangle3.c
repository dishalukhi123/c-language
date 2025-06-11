#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter a number of A :");
    scanf("%d",&a);
    printf("Enter a number of B :");
    scanf("%d",&b);

    c = 180-a-b;

    printf("your approximate value of triangle :%d",c);

    return 0;
}
