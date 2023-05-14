#include<stdio.h>

int sum;

int sumx();
int main()
{
    int n;
    printf("\nEnter the end limit of the range of the sum starting form 1.\n>> ");
    scanf("%d",&n);
    sumx(n);
    printf("%d\n\n",sum);
    return 0;
}

int sumx(int x)
{
    if(x>=1)
    {
        return sum=x+sumx(x-1);
    }
    return sum;
}