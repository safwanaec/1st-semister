#include<stdio.h>
 
int x=1,y=0,n;

int fibonacci();

int main()
{
    n=5;

    fibonacci(n,x,y);


    return 0;
}

int fibonacci(int n, int x, int y)
{
    printf("%d ",x);
    
    if(n>=1)
    {
        
        return fibonacci(n-1,x,y);
    }
}