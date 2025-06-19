#include<stdio.h>
#include <stdbool.h>
void printInteger(int);
void printFloat(float);
void printLong(long);
void printDouble(double);
void printCharacter(char);
void printString(char[]);
void printBoolean(bool);

int main()
    {
     printInteger(10);
     printInteger(20);
     printLong(1.5);
     printFloat(1.5);
     printDouble(1.5);
     printCharacter('a');
     printString("welcome");
     printBoolean(false);
     return 0;

    }
    void printInteger(int val)
        {
          printf("the value is %d\n",val);
        }
    void printLong(long val)
        {
         printf("the value is %d\n",val);
        }
    void printDouble(double val)
        {
          printf("the value is %d\n",val);
        }
    void printFloat(float val)
        {
          printf("the value is %d\n",val);
        }
    void printCharacter(char val)
        {
          printf("the value is %d\n",val);
        }
    void printString(char val[])
        {
          printf("the value is %s\n",val);
        }
    void printBoolean(bool val)
        {
          printf("The value is %d\n", val);
        }