#include <stdio.h>
int main()
{
    int r, c, i, j;
    printf("enter number of rows:- ");
    scanf("%d", &r);
    printf("enter number of columns:- ");
    scanf("%d", &c);

    int a[r][c], rn, cn, rs, cs;

    printf("Enter the elements of the array:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("a[%d][%d]:-", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("enter of row:- ");
    scanf("%d", &rn);
    printf("enterr of column:- ");
    scanf("%d", &cn);

    if (rn < 0 || rn >= r || cn < 0 || cn >= c)
    {
        printf("invalid input");
    }
    else
    {

        for (j = 0; j < c; j++)
        {
            rs += a[rn][j];
        }
        for (i = 0; i < r; i++)
        {
            cs += a[cn][i];
        }
        printf("\nelements of row %d: %d", rn, j);
        printf("\nSum of elements in row %d: %d", rn, rs);

        printf("\nelements of row %d: %d", cn, i);
        printf("\nSum of elements in column %d: %d", cn, cs);
    }
}