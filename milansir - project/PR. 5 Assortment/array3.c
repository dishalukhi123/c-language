#include<stdio.h>
int main()
{
    int i,j,row,col,ans;

    printf("Enter the row :- ");
    scanf("%d",&row);
    printf("Enter the col :- ");
    scanf("%d",&col);

    int a[row][col];

    printf("\nEnter elements of the matrix:\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
        printf("a[%d][%d]: ",i,j);
        scanf("%d",&a[i][j]);
    }
}

    printf("\n original matrix:- \n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
        printf("\n transposes matrix:- \n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ",a[j][i]);
        }
            printf("\n");
    }
    
    return 0;
}