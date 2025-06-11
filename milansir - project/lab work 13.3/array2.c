
#include <stdio.h>

int main()
{
    int i,j,raw,col;
    
    printf("Enter raw size : ");
    scanf("%d",&raw);
    printf("Enter column size : ");
    scanf("%d",&col);
    
    int a[raw][col],b[raw][col],c[raw][col];
    
    printf("\n\nEnter elements for array a\n");
    for(i=0; i<raw; i++){
        for(j=0; j<col; j++){
            printf("a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("\n\nEnter elements for array b\n");
    for(i=0; i<raw; i++){
        for(j=0; j<col; j++){
            printf("b[%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    
    printf("\n\nArray c is \n");
    for(i=0; i<raw; i++){
        for(j=0; j<col; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for(i=0; i<raw; i++){
        for(j=0; j<col; j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}