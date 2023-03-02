#include<stdio.h>
int main()
{
    int i, n, j;

    printf ("\nEnter the number to which you want to draw the triangle to:");

    scanf("%d",&n);

    for (j=0; j<n; j++){

        for(i=1; i<=n-j; i++){

            printf(" %d",i);
        }

        printf("\n");
    }


    return 0;
}
