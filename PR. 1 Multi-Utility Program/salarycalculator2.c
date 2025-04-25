#include<stdio.h>
int main()
{
    int  salary,hra,da,ta,gross;

    printf("Enter your salary:");
    scanf("%d",&salary);

    printf("Enter your hra:");
    scanf("%d",&hra);

    printf("Enter your da:");
    scanf("%d",&da);

    printf("Enter your ta:");
    scanf("%d",&ta);
    
    gross = salary + hra + da + ta;
  
    printf("Gross salary :%d", gross);
    return 0;
}
