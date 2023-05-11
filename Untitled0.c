#include<stdio.h>

int main()
{

    int input_rows;

    scanf("%d",&input_rows);

    int x= input_rows, y=1;

    for(int i=1; i<= ((input_rows-1)*2)+1; i++ )
    {
        if(i==input_rows+1)
        {
            x=2;
        }
        if(i<=input_rows)
        {
            for(int j=x-1; j>=0; j--)
            {
                printf(" ");
            }
            x--;
        }
        else if (i>input_rows)
        {
            x++;
            for(int j=1; j<=x-1; j++)
            {
                printf(" ");
            }

        }


        for(int k=1; k<=y; k++)
        {
            printf("*");
        }
        if (i< input_rows)
        {
            y=y+2;
        }
        else y=y-2;

        printf("\n");

    }

    return 0;
}
