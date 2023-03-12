#include<stdio.h> 
 int main(void) 
 {
    int s,e,a,b,t=0;
    printf("This programme finds numbers between a range that are not devisable by either of two newly inputted numbers.\n\n\n");
    printf("Enter the starting and ending range: ");
    scanf("%d %d",&s,&e);
    
    printf("\n\nEnter the two conditional numbers: ");
    scanf("%d %d",&a,&b);
    
    printf("\n\nThe numbers between %d and %d that are not devisable by %d or %d are: ",s,e,a,b);
    
    for(int i=s; i<=e; i++)
    {
        if(i%a!=0 || i%b!=0)
        {
            printf("%d ",i);
            t++;
        }
    }
    printf("\n\nThere are a total of %d numbers that satisfy the given conditions.",t);

    printf("\n\n");
    
    //printf("\n\n");
    
    return 0; 
 }