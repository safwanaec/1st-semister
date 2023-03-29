#include<stdio.h>
int a,b,c;

void addint(int a)
{
    a=50;
    b=200;
    c=300;
    printf("\ninside addint a=%d b=%d c=%d\n\n",a,b,c);

}

int main()
{
    int b;
    c=100;
    a=40;

    printf("\nBefore calling a=%d b=%d c=%d\n",a,b,c);
    addint(a);
    printf("\nAfter calling a=%d b=%d c=%d\n\n",a,b,c);

    return 0;
}