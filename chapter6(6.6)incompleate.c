#include<stdio.h>
int main(void)
{
    int p=1000;
    int q=p;
    float r=0.10, s=0.01;

    for(int a=1; a<=10; a++)
    {
        printf("\t%d",p);
        p=p+q;
    }

    printf("\n\n");

    for(int a=1; a<=11; a++)
    {
        printf("%.2f\t",r);
        float y=(1+r);
        float x=(1+r);
        r=r+s;

        for(int n=1; n<=11; n++)
        {
            //for(int n=1; n<=11; n++)
            //{
                x=x*y;
                float v=p*x;
                printf("\t%.2f",v);
            //}
            //printf("\t%d",n);
        }
        printf("\n\n");
    }


    printf("\n\n");
    return 0;
}
