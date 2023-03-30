#include<stdio.h>
int n;

int main(void)
{
    printf("Enter the matrix dimention,n: ");
    scanf("%d",&n);
    int B[n][n];
    scan(B);
    change(B);
    print(B);

    return 0;
}


int scan(int A[n][n])
{
    //int A[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("put in the value of [%d]x[%d]: ",i+1,j+1);
            scanf("%d\n",&A[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}

int change(int A[n][n])
{
    for(int i=0; i<n; i++)
    {
        int max = 0;
        for(int j=0; j<n; j++)
        {
            if(A[i][j]>max)
            {
                max = A[i][j];
            }
        }

        for(int j=0; j<n; j++)
        {
            A[i][j] = max;

        }

    }
}

int print(int A[n][n])
{
    printf("modified matrix=\n\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}
