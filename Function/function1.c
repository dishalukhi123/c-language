#include<stdio.h>
void printmessage();
int main()
    {
          printmessage();
          printf("Message by main.\n");
          printmessage();
          return 0;
    }
    void printmessage()
    {
      printf("message by function.\n");
    }

