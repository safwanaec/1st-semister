#include<stdio.h>

int main()
{
    int x,a,b,c;
    a=0; //Lets take 0 as the initial value of a
    x = 10;
    b = ++x;
    c = --b;
    a = --b + a++;
    
    printf("x = %d\na = %d\nb = %d\nc = %d",x,a,b,c);
    
    x = 2;
    a = 1;
    c = 3;
    b = ++a*x - c--;
    
    printf("\n\nx = %d\na = %d\nb = %d\nc = %d",x,a,b,c);
    
    return 0;
}