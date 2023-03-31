#include<stdio.h>
int main(void)
{
    int i,n,j;
    unsigned long k=1;
    //take number from user
    printf("Please enter the value of n to get n! : ");
    scanf("%d",&n);
    //in a for loop take an integer i from 1 to the value of n
    //take an integer that has the initial value of 1 and multiply it by i
    //then assign the multiplied value to j itself
    for(i=1; i<=n; i++)
    {
        printf("%d!  =  ",i);
        for(j=1; j<=i; j++)
        {
            printf("%d  ",j);
            if(j<i)
                {
                    printf("x  ");
                }
        }
        k=k*i;
        if(k!=1)
        {
            printf("= %lu",k);
        }
        printf("\n\n");
    }
    //print j
    printf("\n\n%d! = %lu\n\n",n,k);
    return 0;
}
