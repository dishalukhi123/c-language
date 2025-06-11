#include<stdio.h>
int main()
{
    int a;

    printf("Enter age :");
    scanf("%d",&a);

    if (a >= 18 && a < 100 ) {
        printf("yes, you giving a vote");
    }else{
        printf("you not giving a vote");

    }

    return 0;
}
