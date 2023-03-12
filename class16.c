#include<stdio.h>
int main(void)
{
    int m,n,x=1;
    printf("enter a number: ");
    scanf("%d",&m);
    //printf("\n\n");
    n=m;
    for(int i=0; i<n; i++)
    {
        for(int k=1; k<=i; k++)
        {
            printf(" ");
        }
        for(int j=i*2+1; j<=n*2-1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for(int i=1; i<=n; i++)
    {
        for(int k=n-i; k>=1;k--)
        {
            printf(" ");
        }
        for(int j=1; j<=i*2-1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for(int i=1; i<=n; i++)
    {
        for(int k=n-i; k>=1;k--)
        {
            printf("  ");
        }
        for(int j=1; j<=i*2-1; j++)
        {

            printf("%d",x);
            if(x>=9)
            {
                x=1;
            }
            x++;
            if(x>9)
            {
                printf(" ");
            }
            else{printf(" ");}
        }
        /*if(i%3==0)
            {
                x=1;
            }*/

        printf("\n");
    }
    return 0;
}
