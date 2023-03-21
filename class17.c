#include<stdio.h>
int main(void)
{
    int n,temp;
    printf("How many integers do you want to enter?\n");
    scanf("%d",&n);
    int a[n], b[n];

    printf("\n\nPlease enter %d integers to sort them: \n",n);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        b[i]=0;
    }
    printf("\n\n");

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(a[j]<=a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        printf("%d, ",a[i]);

    }

    printf("\n\n");

    for(int i=0; i<n; i++)
    {
        int max=0,x=0;
        for(int j=0; j<n; j++)
        {
            if(max<=a[j])
            {
                max=a[j];
                x=j;
            }
        }
        b[i]=max;
        a[x]=0;
    }
    for(int i=0; i<n; i++)
    {
        printf("%d, ",b[i]);

    }
    return 0;
}
