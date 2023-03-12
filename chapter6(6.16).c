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
            printf("S ");
        }
        printf("\n");
    }
    printf("\n\n");
    
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if((i!=1 && j!=1) && (i!=n && j!=n))
            {
                printf("  ");
            }
            else printf("S ");
        }
        printf("\n");
    }


    printf("\n\n");
    
    return 0; 
 }