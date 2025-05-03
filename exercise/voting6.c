#include<stdio.h>
int main()
{
    int voting;

    printf("Enter your Ege :");
    scanf("%d",&voting);

    if (voting > 18)
    {
        printf("yes");
    }else
    printf("not");
    
    return 0;
}
