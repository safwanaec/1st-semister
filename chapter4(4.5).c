#include<stdio.h>
#include<math.h>
    
int main(){   
    
    int num1,num2;
    
    printf("This program demonstrates the process of multiplication.\n\n");
    
    printf("Please enter a two digit number:\n");
    scanf("%d",&num1);
    
    printf("\n");
    
    printf("Please enter another two digit number:\n");
    scanf("%d",&num2);
    
    int stnum2= num2 / 10;
    int ndnum2= num2 % 10;
    
    //printf("\n\n%d\n%d\n\n",stnum2,ndnum2);
    
    printf("\t                            %d \n",num1);
    printf("\t                     x      %d \n",num2);
    printf("\t                   ------------\n");
    printf("\t%d x %d       is            %d \n",stnum2,num1,stnum2*num1);
    printf("\t%d x %d       is            %d \n",ndnum2,num1,ndnum2*num1);
    printf("\t                   ------------\n");
    printf("\tAdd          them           %d \n",stnum2*num1 + ndnum2*num1);
    return 0;
}