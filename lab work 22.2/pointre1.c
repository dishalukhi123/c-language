
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
    
    int *ptr,**ptr2;
    ptr = a;
    ptr2 = &ptr;
    
    for(i=n-1; i>=0; i--){
        printf("%lu\t",(*(*ptr2+i)) *  (*(*ptr2+i)));
    }

    return 0;
}