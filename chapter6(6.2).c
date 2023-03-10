#include<stdio.h>
int main(void)
{
    int i,n,j=1;
    //take number from user
    printf("Please enter the value of n to get n! : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        j=j*i;
    }
    printf("\n\nn! = %d\n\n",j);
    return 0;
}
