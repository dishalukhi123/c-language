#include<stdio.h>
void printinteger(int);
void printfloat(float);
int main()
    {
  printinteger(10);
  printfloat(12.5);
  printfloat(65);
  printfloat(12.5);
      return 0;
    }
    void printinteger(int a)
        {
      printf("the value is %d\n",a);
        }
      void printfloat(float a)
            {
        printf("the value is %0.2f \n",a);
            }
