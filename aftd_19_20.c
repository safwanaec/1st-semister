#include<stdio.h>

void p(int *b)
{
    int i, s=0;
    for(i=0; i<5; i++)
    {
        s=s+*b;
        b--;
    }
    printf("%d",s);
}
   
int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,0};
    p(&a[4]);
    
    return 0;
}