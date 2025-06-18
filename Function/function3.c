#include <stdio.h>
void dosum();
int main()
    {
      dosum();
      return 0;
    }

    void dosum()
        {
      int a=0,b=0,sum=0;
      printf("enter the first number\n");
      scanf("%d",&a);
      printf("enter the second number\n");
      scanf("%d",&b);
      sum=a+b;
      printf("the sum of %d and %d is %d\n",a,b,sum);
        }