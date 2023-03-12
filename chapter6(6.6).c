#include<stdio.h>
int main(void)
{
    int p=1000;
    int q=p;
    float r,s=0,v;

    printf("\n\n");

    for(int a=1; a<=10; a++)
    {
        printf("\t%d",p);
        p=p+q;
    }

    printf("\n");

    for(int a=1; a<=90; a++)
    {
        printf("-");
    }

    printf("\n");

    for(int a=1; a<=11; a++)
    {
        r=0.1+s;
        s+=0.01;
        printf("%.2f|\t",r);
        float y=(1+r);
        float x=(1+r);
        p=1000;
        q=0;

        for(int n=1; n<=10; n++)
        {
            p=p+q;
            q=1000;
            v=p*x;
            printf("%.0f\t",v);
            
        }
        printf("\n    |\n");
    }


    printf("\n\n");
    return 0;
}
