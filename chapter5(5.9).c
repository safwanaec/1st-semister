#include<stdio.h>
#include<math.h> 
    
int main(){   
    int x;
    
    printf("Please enter the value of x:");
    scanf("%d",&x);
    printf("\n\n");
    
    if(x!=0){
    if(x<0){printf("y = %d",1);}
    else if(x>0){printf("y = %d",-1);}
    }
    else printf("y = %d",0);
    return 0;
}