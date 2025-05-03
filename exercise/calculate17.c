#include<stdio.h>
int main(int argc, char const *argv[])
{
    int val1,val2;

    printf("Enter e number value 1 :");
    scanf("%d",&val1);
    printf("Enter e number value 2 :");
    scanf("%d",&val2);

    if (val1 == val2)
    {
       printf("profit");
    }else{
        printf("loss");
    }
    

    return 0;
}
