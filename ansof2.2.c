#include <stdio.h>

int main()
{
    int n,sum=0;

    printf("How many numbers do you want to enter?\n>> ");
    scanf("%d",&n);
    printf("\n\n");
    int num[n];
    printf("Enter contents of array:\n");

    for(int i=1; i<=n; i++)
    {

        scanf("%d",&num[i]);
        //printf("\n");
    }

    for(int i=1; i<=n; i++)
    {
        num[i]=num[i]*num[i];
        sum=sum+num[i];
    }
    printf("\n");
    printf("The sum of squares = %d\n\n",sum);

    return 0;
}
