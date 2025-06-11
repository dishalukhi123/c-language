
#include <stdio.h>

int swap(int *p1, int *p2){
    int temp;
    temp = *p1;
    *p1 = *p2; 
    *p2 = temp;
}
int main()
{
    int a,b,*ptr1,*ptr2;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    
    ptr1 = &a;
    ptr2 = &b;
    
    swap(ptr1,ptr2);
    
    printf("a : %d \nb : %d \n",a,b);

    return 0;
}