#include <stdio.h>

int main()
{
    int num,nn=0,y=0;

    printf("Enter any number :: ");
    scanf("%d",&num);
    reverse(num,y);

    if(reverse(num,y)==num)
    {
        printf("\n\n%d is a palindrome\n\n", num);
    }

    else
    {
        printf("\n\n%d is not a palindrome\n\n", num);
    }

    return 0;
}

int reverse(int x,int newnum)
{



    if(x!=0)
    {
        newnum=newnum*10+x%10;
        reverse(x/10,newnum);
    }

    else return newnum;
}
