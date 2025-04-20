#include<stdio.h>
int main (){

    //years to minutes
    int year,day,hour,minute;

    printf("Enter value :");
    scanf("%d",&year);

    day = year * 365;
    hour = day * 24;
    minute = hour * 60;

    printf("years to minutes =%d",minute);
}