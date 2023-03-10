#include<stdio.h>
int main(void)
{
    int n,m,o=0;

    //take number from user
    printf("Please enter a number: ");
    scanf("%d",&n);

    while(n>9)
    {
        m=n%10;
        o=m+o;
        n=n/10;
    }
    o=o+n;
    printf("\n\nThe sum of all of the digits in the entered number is = %d\n\n",o);

    return 0;
}
