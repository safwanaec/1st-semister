#include<stdio.h>

int main()
{
    int LL, UL;
    printf("\nInput lower limit: ");
    scanf("%d",&LL);

    printf("\nInput upper limit: ");
    scanf("%d",&UL);

    for(int i=LL; i<=UL; i++)
    {
        int x=0;
        for(int j=1; j<=i; j++)
        {
            if(i%j==0)
            {
                x++;
            }
        }
        if(x<=2)
        {
            printf("%d, ",i);
        }
    }

    return 0;
}

