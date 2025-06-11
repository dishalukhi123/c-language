#include<stdio.h>
int main()
{
    int i,n;

    printf("Enter the array :- ");
    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }

    printf("\n print array element\n");

    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            printf("%d ",a[i]);
        }
    }
}