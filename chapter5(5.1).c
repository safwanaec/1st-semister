#include<stdio.h>
#include<math.h>
    
int main(){   
    
    int num;
    
    printf("Please enter a number:");
    scanf("%d",&num);
    
    int type = num % 2;
    
    if (type == 0){
    printf("NUMBER IS EVEN!");
    }
    
    if (type !=0){
    printf("NUMBER IS ODD!");
    }    
    
    //else printf("NUMBER IS ODD!");
    
    
        
    printf("\n");
    
    
    return 0;
}