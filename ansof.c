#include <stdio.h>

int main()
{
    int n,sum=0,mult=1;

    printf("How many numbers do you want to enter?\n>> ");
    scanf("%d",&n);
    printf("\n\n");
    int num[n];

    for(int i=1; i<=n; i++)
    {
        printf("Enter %d number :: ",i);
        scanf("%d",&num[i]);
        printf("\n\n");
    }

    for(int i=1; i<=n; i++)
    {
        if(num[i]%2==0)
        {
            sum = sum + num[i];
        }

        else
        {
            mult=mult*num[i];
        }
    }

    printf("Sum of even numbers is: %d\n\n",sum);
    printf("The multiplication of odd numbers is: %d",mult);


    return 0;
}
