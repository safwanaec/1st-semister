#include<stdio.h>
int main(void)
 {
    int n,temp,temp2,max,x=0,min,k=0,y=0;
    printf("How many integers do you want to enter?\n");
    scanf("%d",&n);
    int a[n],b[n];

    printf("\n\nPlease enter %d integers to sort them: \n",n);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    for(int i=0; i<n;i++)
        {
            if(k<=a[i])
            {
                k=a[i];
            }
        }
    for(int i=0; i<n; i++)
    {
        max=0;
        for(int j=i; j<n;j++)
        {
            if(max<=a[j])
            {
                max=a[j];
                x=j;
            }
        }
        min=k;
        for(int j=i; j<n; j++)
        {
            if(min>=b[j])
            {
                min=b[j];
                y=j;
            }
        }
        temp=a[i];
        a[i]=a[x];
        a[x]=temp;

        temp=b[i];
        b[i]=b[y];
        b[y]=temp;
    }
    printf("\n\n\n");

    printf("smallest to largest\t\tlargest to smallest\n\n");
    for(int i=0; i<n; i++)
    {
        printf("\t%d\t\t\t\t%d\n",b[i],a[i]);
    }

    return 0;
 }