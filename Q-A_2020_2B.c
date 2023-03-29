#include<stdio.h>

int function(int y)
{
    y=y*y;

    return;
}

int main()
{
    int x,y;

    scanf("%d%d",&x,&y);

    /*switch(x)
    {
        case():printf("x is negative");
            break;
        case(x>0):printf("x is positive");
    }*/
    x=function(y);
    printf("Final value of=%d\n",x);
}
