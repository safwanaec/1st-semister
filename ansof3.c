#include<stdio.h>

int x=0;

int sum_of_even();

int main()
{
    int LL, UL;
    printf("\nInput lower limit: ");
    scanf("%d",&LL);

    printf("\nInput upper limit: ");
    scanf("%d",&UL);

    printf("\nSum of even numbers between %d to %d = %d",LL,UL,sum_of_even(LL,UL));

    return 0;
}

int sum_of_even(int ll, int ul)
{
    int a=ll;

    if (a%2==0 && a<=ul)
    {
        return x= x+sum_of_even(ll+1,ul);
    }
    else if(a%2!=0 && a<=ul)
    {
        return sum_of_even(ll+1,ul);
    }
    else return x;
}
