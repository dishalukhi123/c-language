#include <stdio.h>
#include <stdbool.h>>
void printInteger(int);
void printLong(long);
void printFloat(float);
void printDouble(double);
void printCharacter(char);
void printString(char[]);
void printBoolean(bool);
int main()
{
  int iVal = 25;
  long lVal = 6356;
  float fVal = 32.45;
  double dVal = 5221.75;
  char cVal = 'A';
  char message[] = "Welcome";
  bool bVal = true;
  printInteger(iVal);
  printInteger(lVal);
  printFloat(fVal);
  printDouble(dVal);
  printCharacter(cVal);
  printString(message);
  printBoolean(bVal);
  return 0;
}
void printInteger(int val)
{
  printf("The value is %d\n", val);
}
void printLong(long val)
{
  printf("The value is %ld\n", val);
}
void printFloat(float val)
{
  printf("The value is %.2f\n", val);
}
void printDouble(double val)
{
  printf("The value is %.2lf\n", val);
}
void printCharacter(char val)
{
  printf("The value is %c\n", val);
}
void printString(char val[])
{
  printf("The value is %s\n", val);
}
void printBoolean(bool val)
{
  printf("The value is %d\n", val);
}