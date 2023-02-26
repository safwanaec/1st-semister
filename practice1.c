#include<stdio.h>

int n1,n2,n3,a1;

void sc3num(void);

int main()
{
    printf("This function takes 3 numbers as input and supposedly multiplys them.\n\n");
    
    sc3num();
    
    a1 = n1 * n2 * n3;
    
    printf("%d multiplied by %d and %d is equal to %d",n1,n2,n3,a1);
    
    printf("\n\nThis function takes 3 numbers as input and supposedly adds them.\n\n");
    
    sc3num();
    
    a1 = n1 + n2 + n3;
    
    printf("%d added with %d and %d is equal to %d",n1,n2,n3,a1);
    
    
    return 0;
}

void sc3num(void){

    printf("Please input 3 numbers.\n");
    
    scanf("\n%d \n%d \n%d",&n1,&n2,&n3);
    
    } 
