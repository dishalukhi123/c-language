#include<stdio.h>
int main()
{
    int maths,english,science , marks;
    float total;

    printf("Enter a mark for maths:");
    scanf("%d",&maths);

    printf("Enter a mark for english:");
    scanf("%d",&english);

    printf("Enter a mark for science:");
    scanf("%d",&science);

    marks = maths + english + science;

    total = marks / 3;

    printf("average mark :%f",total);

    return 0;
}
