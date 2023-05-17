#include <stdio.h>

int main()
{
    int mtx[3][3];

    printf("Enter the elements of a 3*3 matrix: \n\n");

    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=3; j++)
        {
            printf("Enter the eliment of Row %d and Column %d : ",i,j);
            scanf("%d",&mtx[i][j]);
            printf("\n");
        }
    }

    printf("\n\nThe given Matrix is : \n");

    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=3; j++)
        {
            printf("\t%d",mtx[i][j]);
        }
        printf("\n\n");
    }

        for(int i=1; i<=3; i++)
    {
        int x=0,y=0;

        for(int j=1; j<=3; j++)
        {
            x = x + mtx[i][j];
            y = y + mtx[j][i];
        }
        
        printf("Sum of elements of row %d = %d\n\n",i,x);
        printf("Sum of elements of column %d = %d\n\n",i,y);
    }

    return 0;
}