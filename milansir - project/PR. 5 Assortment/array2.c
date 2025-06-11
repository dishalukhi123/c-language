#include<stdio.h>
int main()
{
    int i,j,row,col;

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
    
    int max = a[0][0];  

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
    }
    printf("\nThe largest element in the matrix is: %d\n", max);

    return 0;
}