#include<stdio.h>
int main()
{
    int val1,val2;

    printf("Enter any number :");
    scanf("%d",&val1);
    printf("Enter any number :");
    scanf("%d",&val2);

    if ((val1 > 100 && val1 < 200) || (val2 > 100 && val2 < 200))
    {
        printf("inclusive");
    }else{
        printf("inclusive not");
    }
    
    return 0;
}
