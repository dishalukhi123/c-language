#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter a number of A :");
    scanf("%d",&a);
    printf("Enter a number of B :");
    scanf("%d",&b);

    c = a;
    a = b;
    b = c;

    printf("Approximant value :%d\n", a);
    printf("Approximant value :%d", b);

    return 0;
}