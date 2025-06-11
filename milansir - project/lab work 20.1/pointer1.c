
#include<stdio.h>

int main()
{
    int n,i;
    
    printf("Enter array size : ");
    scanf("%d",&n);
    
    int a[n];
    
    for(i=0; i<n; i++){
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    
    int *ptr;
    ptr = a;
    
    for(i=0; i<n; i++){
        printf("%lu\t",(*(ptr+i))*(*(ptr+i)));
    }

    return 0;
}