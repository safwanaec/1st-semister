#include<stdio.h>
int main(void)
{
    int n,i=1,k=1,j=1;

    //take number from user
    printf("Please enter a number: ");
    scanf("%d",&n);

    printf("\n\n");

    do
        {
            printf("%d  ",i);
            printf("%d  ",j);
            i=i+j;
            j=i+j;
            k++;
        }
        while(k<=n);
    printf("\n\n");

    return 0;
}
