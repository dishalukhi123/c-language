#include<stdio.h>
int main()
{
    int a,b;
    
    printf("Enter a number of A :");
    scanf("%d",&a);

    printf("Enter a number of b :");
    scanf("%d",&b);

    if (a > b)
    {
      printf("b is min");
    }else{
       printf("A is min");
    }
    

    return 0;
}
