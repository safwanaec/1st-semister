//#include<stdio.h>

//p();
int main(void)
 {
    int a[]={1,2,3,4,5,6,7,8,9,0};
    p(&a[4]);
    return 0;
 }

void p(int b[])
{
    int i=0,s=0;
    while(b[i])
    {
        s=s+b[i];
        i++;
    }
    printf("%d",s);
}