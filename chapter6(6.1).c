#include<stdio.h>
int main(void)
{
    int n,m,o=0;

    //take number from user
    printf("Please enter a number: ");
    scanf("%d",&n);

    //use loop to module devide the number > multiply by 10 > module devide the remaining  number > add to first answer of module divition
    while(n>9)
    {
          m=n%10;
          m=o+m;
          o=m*10;
          n=n/10;

    }
    printf("\n\nThe digit wise reverse number is: %d\n\n",o+n);

    return 0;
}
