#include<stdio.h>

int a = 20;
int sum(int a, int b)
{
    printf("Value of a in sum = %d\n",a);
    
    printf("Value of b in sum = %d\n",b);
    
    return a+b;
}

int main()
{
    int a=10, b=20, c=0;
    
    printf("Value of a in main = %d\n",a);
    c = sum(a,b);
    //printf("Value of b in main = %d\n",b);
    printf("c = %d",c);
    
    return 0;
}