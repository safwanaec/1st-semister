#include<stdio.h>
#include<math.h> 
    
int main(){   
    int a;
    
    printf("Please enter the ending number of Floyd's number triangle:");
    scanf("%d",&a);
    printf("\n\n");
    
    
    for(int b=1; b<=a; b++){
    
        for(int c=1; c<=b; c++){
            printf("%d",c);
        }
    
        printf("\n");
    
    }
    
    printf("\n\n");
    
    for(int b=1; b<=a; b++){
    
        for(int c=1; c<=b; c++){
    
            if(c%2!=0)
                printf("%d",1);
            else printf("%d",0);
        }
    
        printf("\n");
    
    }
    
    return 0;
}