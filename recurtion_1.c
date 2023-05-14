#include<stdio.h>
 

int print_natural_numbers();



int main()
{ 
    int n, a=1;
    printf("\nHow many natural numbers do you want to print?\n>> ");
    scanf("%d",&n);
    //printf("\n%d\n",n);
    print_natural_numbers(n,a);


    return 0;
}

int print_natural_numbers(int x, int y)
{
    printf("%d\n",y);

    if(y<x)
    {
        return print_natural_numbers(x,y+1);
    }
    else return 0;
}