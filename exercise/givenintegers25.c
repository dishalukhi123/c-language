#include<stdio.h>
int main(int argc, char const *argv[])
{
    int sum1,sum2,sum;

    printf("Enter number id A : ");
    scanf("%d",&sum1);

    printf("Enter number id B : ");
    scanf("%d",&sum2);

    sum = sum1 + sum2;

    if (sum >= 10 && sum <=20)
    {
        printf("inclusive");
    }else{
        printf("inclusive not");
    }
    
    return 0;
}
