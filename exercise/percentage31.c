#include<stdio.h>
int main()
{
    int english,math,science,history,computer,total;
    float mark;

    printf("Enter marks of english :");
    scanf("%d",&english);
    printf("Enter marks of math :");
    scanf("%d",&math);
    printf("Enter marks of science :");
    scanf("%d",&science);
    printf("Enter marks of history :");
    scanf("%d",&history);
    printf("Enter marks of computer :");
    scanf("%d",&computer);

    total = english + math + science + history + computer;
    mark = total / 5.0;

    printf("marks :%f",mark);

    if (mark >= 90)
    {
        printf("Grade A+\n");
    }else if (mark >= 80)
    {
        printf("Grade A\n");
    }else if (mark >= 70)
    {
        printf("Grade B\n");
    }else if (mark >= 60)
    {
        printf("Grade C\n");
    }else if (mark >= 40)
    {
        printf("Grade D\n");
    }else{
        printf("Fail\n");
    }
    
    
    
    
    
    return 0;
}
