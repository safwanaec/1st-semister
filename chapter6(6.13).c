#include<stdio.h> 
 int main(void) 
 {
    int a,b=1,j;
    float e =1;
    printf("To get the value of Euler's number to n, enter the value of n: ");
    scanf("%d",&a); 
    
    for(int i=1; i<=a; i++)
    {
        for(j=1; j<=i; j++)
        {
            b=b*j;
        }
        e=e+(1/(float)b);
        
        //printf("\n\n%d! = %d",i,b);
        b=1;
    } 
    printf("\n\nThe Euler's number of %d is, e = %.4f",a,e);

    printf("\n");
    
    return 0; 
 }