#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;

    printf("Enter number A :");
    scanf("%d",&a);
    printf("Enter number B :");
    scanf("%d",&b);

    if (a == 30 || b == 30 || (a + b) == 30)
    {
        printf("True");
    }else{
        printf("Fules");
    }
    
    return 0;
}
