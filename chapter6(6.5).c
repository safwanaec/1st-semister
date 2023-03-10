#include<stdio.h>
int main(void)
{
    int n;
    double x,y;
    printf("Please enter two values to get x to the power n: \n\n");
    printf("\tx = ");
    scanf("%lf",&x);
    printf("\n");
    printf("\tn = ");
    scanf("%d",&n);
    y=x;

     for(int i=2; i<=n; i++)
        {
            y=x*y;
        }
     printf("\n\n%.3lf  to the power  %d  is  %.3f",x,n,y);

    printf("\n\n");
    return 0;
}
