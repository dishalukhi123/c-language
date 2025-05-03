#include<stdio.h>
int main()
{
    int kilogram,gram;

    printf("Enter number : ");
    scanf("%d",&kilogram);

    gram = kilogram * 1000;
    printf("your gram is :%d",gram);
    return 0;
}
