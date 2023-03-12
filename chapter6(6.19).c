#include<stdio.h> 
 int main(void) 
 {
    int n;
    float e =1;
    printf("Enter the value of n where n is the lenth of all sides of a square: ");
    scanf("%d",&n); 
    
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(n%2!=0)
            {
                if(i==n/2+1 && j==n/2+1)
                {
                printf("O ");
                }
                else printf("S ");
            }
            else
            {
                if((i==n/2+1 || i==n/2) && (j==n/2+1 || j==n/2))
                {
                printf("O ");
                }
                else printf("S ");
            }
        }
        printf("\n");
    }
    printf("\n\n");
    
    //printf("\n\n");
    
    return 0; 
 }