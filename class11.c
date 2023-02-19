#include <stdio.h>
#include <stdlib.h>


int main(void)
{

int a = 11;
int b = 22;
int c = 33;
int d = 44;

    /*printf("Enter 4 values\n");

    scanf("%d %d %d %d",&a,&b,&c,&d);

    printf("\n\n");*/


    if (a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                printf("%d is greater then %d,%d and %d",a,b,c,d);
            }

        }

    }

    else if(b>a)
    {
        if(b>c)
        {
            if(b>d)
                {
                    printf("%d is greater then %d,%d and %d",b,a,c,d);
                }

        }

    }

    else if(c>a)
    {
        if(c>b)
        {
            if(c>d)
                {
                    printf("%d is greater then %d,%d and %d",c,a,b,d);
                }

        }

    }


    else
        printf("%d is greater then %d, %d and %d",d,c,a,b);

printf("\n\n");


    /*else if (a<b)
    {
        printf("\n\n%d is smaller then %d\n\n",a,b);
    }
    else
    {
        printf("\n\n%d is equal to %d\n\n",a,b);
    }*/








    return 0;
}
