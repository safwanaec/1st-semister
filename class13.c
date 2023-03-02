#include<stdio.h>
int main()
{
    int i=1, sum = 0, I, F;

    printf ("\nEnter the number from which you want to start adding from:");

    scanf("%d",&I);

    printf ("\nEnter the number to which you want to add:");

    scanf("%d",&F);

    for (i = I; i<F; i++)
    {
        sum = sum + i;
    }

    printf ("\nThe sum is %d\n",sum);


    int sum1 = 0, E, J;

    printf ("\nEnter the number from which you want to start adding from:");

    scanf("%d",&J);

    int j = J;

    printf ("\nEnter the number to which you want to add:");

    scanf("%d",&E);

    while (j<E)
    {
        sum1 = sum1 + j;

        j++;
    }

    printf ("\nThe sum is %d\n",sum1);



    return 0;
}
