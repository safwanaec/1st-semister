#include<stdio.h>

int a,b,c;
int sum(int a)
{
    a=50;
    b=200;
    c=300;
}

int main()
{
    int b=20;
    c=100;
    a=40;
    
    printf("Before calling a = %d, b = %d, c = %d\n",a,b,c);
    sum(a);
    printf("after calling a = %d, b = %d, c = %d\n",a,b,c);
    
    return 0;
}