#include<stdio.h>
#include<math.h>
int j = 0; 
    
int main(){   
    int a,b,c;
    printf("\nThis programme finds the numbers devisable by a specefied number and adds them.\n");
    
    printf("\nEnter the starting number: ");
    scanf("%d",&a);
    
    printf("\nEnter the ending number: ");
    scanf("%d",&b);
    
    printf("\nEnter the conditional devisable number: ");
    scanf("%d",&c);
    
    printf("\n\nThe numbers which satisfy the specified conditions are: ");
    
    for(int i=a; i<=b; i++){
    
    if(i%c==0){
        printf("%d ",i);
        
        j = i+j;
        }
    
    }    
    
    printf("\n\nThe sum of all numbers from 100 to 200 that are devisable by 7 is: %d",j);
        
    printf("\n");
    
    
    return 0;
}