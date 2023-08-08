#include<stdio.h>

void p(int b[])
{
    int i=1, s=0;
    while(b[i])
    {
        s=s+b[i];
        i++;
    }    
    printf("%d",s);
}
   
int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,0};
    p(&a[4]);
    
    return 0;
}