#include<stdio.h>
#include<math.h> 
    
int main(){   
    float b = 0.0;
    
    printf("This function prints the square root table from 0.0 to 9.9.\n\n");
    
    printf("\n\tNUMBER");
    
    do{
            printf("\t%.1f",b);
            b = b+0.1;
            }while(b<1.0);
        printf("\n");
        
    for(float a = 0.0; a<=9.0; a++){
        printf("\t%.1f",a);
        
        for(float c = 0.0; c<1.0; c=c+0.1){
            double d = sqrt(a+c);
            printf("\t%.2f",d);
            }
        
        printf("\n");
    }
    
    return 0;
}