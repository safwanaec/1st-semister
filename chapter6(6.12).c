#include<stdio.h> 
 int main(void) 
 {
    printf("This program prints the letter s in a 18x15 grid\n\n"); 
    int x=18,y=15; 
    
    for(int j=1; j<=y; j++)
    {
        for(int i=1; i<=x; i++)
        {
            if((j>3 && j<7 && i>4) || (j>9 && j<13 && i<15))
            {
                printf("  ");
            }
            else 
            {
                if((j==2 && i>2 && i<17) || (j==3 && i>9 && i<17) || (j==7 && i>5 && i<15) || ((j==8 || j==9) && i>0 && i<15) || (((j==13  && i>4) || (j==14 && i>3) || (j==15 && i>2)) && i<15))
                {
                    printf("- ");
                }
                 else 
                {
                    printf("* ");
                }
            }
             
        }
        
        printf("\n");
    }
    
    return 0; 
 }