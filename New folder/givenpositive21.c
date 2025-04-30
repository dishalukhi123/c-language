#include<stdio.h>
int main()
{
    int val;

    printf("Enter a number :");
    scanf("%d",&val);

    if (val % 3 == 0)
    {
        printf("multiple of 3");
    }else if (val % 7 == 0)
    {
        printf("multiple of 7");
    }else{
        printf("invilde input");
    }
    
    
    return 0;
}
