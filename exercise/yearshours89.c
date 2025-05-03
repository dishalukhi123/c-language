#include<stdio.h>
int main (){

    //years to hour
    int year,day,hour;

    printf("Enter value :");
    scanf("%d",&year);

    day = year * 365;
    hour = day * 24;

    printf("years to minutes =%d",hour);
}