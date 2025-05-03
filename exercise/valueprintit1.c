#include<stdio.h>
int main()
{
    int rollnumber;
    float pr;
    char name[10];

    printf("Enter Roll number :");
    scanf("%d", &rollnumber);

    printf("Enter a percentage :");
    scanf("%f",&pr);

    printf("Enter a name :");
    scanf("%s",name);

    printf("you detalis  \n%d\n %.2f\n %s\n",rollnumber,pr,name);

    return 0;
}
