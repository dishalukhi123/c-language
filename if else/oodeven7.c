#include<stdio.h>
int main(int argc, char const *argv[])
{
    int val;

    printf("Enter a number:");
    scanf("%d",&val);

    if (val % 2 == 0)
    {
        printf("Even");
    }else{
        printf("ood");
    }
    
    return 0;
}
