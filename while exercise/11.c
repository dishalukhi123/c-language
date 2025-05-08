#include<stdio.h>
int main()
{
    int i=1,no;

    printf("Enter a numbe :-");
    scanf("%d",&no);

    while (i<= 10)
    {
        printf("%d * %d = %d\n",no,i,no * i);
        i++;
    }
    
    return 0;
}
