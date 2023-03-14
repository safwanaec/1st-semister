#include<stdio.h>
int main(void)
{
    int n,temp;
    printf("How many integers do you want to enter?\n");
    scanf("%d",&n);
    int a[n],b[n];

    printf("\n\nPlease enter %d integers to sort them: \n",n);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }

    for(int i=0; i<n; i++)
    {
        int k=0,l=0;
        for(int j=0; j<n; j++)
        {
            if(a[i]>a[j])
            {
                k++;
            }
            if(b[i]<b[j])
            {
                l++;
            }
        }
        temp=a[k];
        a[k]=a[i];
        a[i]=temp;

        temp=b[l];
        b[l]=b[i];
        b[i]=temp;
    }
    printf("\n\n\n");

    printf("smallest to largest\t\tlargest to smallest\n\n");
    for(int i=0; i<n; i++)
    {
        printf("\t%d\t\t\t\t%d\n",a[i],b[i]);
    }

    return 0;
}
