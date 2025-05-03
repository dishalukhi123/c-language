#include<stdio.h>
int main()
{
    float PI=3.14,redius,area;

    printf("Enter the radius of the circal: ");
    scanf("%f",&redius);

    
    area = PI * redius * redius;

    printf("your area is  : %f",area);    
    
    return 0;
}
