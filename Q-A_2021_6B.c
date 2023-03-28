#include<stdio.h>

int main()
{
    int n;
    
    float even=0, odd=0;
    
    printf("Please enter an integer N to get the sum of the seriese\n\n");
    printf("1-(1/2)+(1/3)-(1/4)+....(1/N)\n\nN = ");
    scanf("%d",&n);
    
    if(n>0)
    {
        for(int i=1; i<=n; i++)
        {
            if(i%2!=0)
            {
                odd = odd+(1.0/i); 
            }
            else even = even-(1.0/i);
        }
        
        printf("The sum of all the numbers in the seriese is = %.4f\n\n",odd+even);
    }
    else printf("negetive numbers not supported");
    return 0;
}