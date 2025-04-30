#include<stdio.h>
int main(int argc, char const *argv[])
{
    int val;

    printf("Enter a number :");
    scanf("%d",&val);
    if (val <= 100)
    {
        printf("10 to 100");
    }else if (val <= 200)
    {
        printf("10 to 200");
    }else{
        printf("invilde input");
    }
    
    
    return 0;
}
