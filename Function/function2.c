#include <stdio.h>
void dosum();
int main()
    {
     dosum();
     return 0;
    }

    void dosum()
        {
          int a=10,b=20,sum=0;
          sum=a+b;
          printf("the sum of %d and %d is %d\n",a,b,sum);
        }