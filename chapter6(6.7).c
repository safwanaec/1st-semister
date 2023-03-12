#include<stdio.h> 
 int main(void) 
 { 
     int n; 
     printf("please enter a number: "); 
     scanf("%d",&n); 
  
     for(int i=1; i<=n; i++) 
     { 
         for(int j=1; j<=i; j++) 
         { 
             printf("%d ",i); 
         } 
         printf("\n"); 
     } 
  
     printf("\n\n"); 
  
     int m=n;
     int j=n; 
  
     for(int i=1; i<=n; i++) 
     { 
         if(j!=m) 
             { 
                 printf("  "); 
             }

         for(int k=2; k<=i; k++)
            {
                printf("  ");
            }
         for(int j=m; j>=1; j--) 
         { 
             if(j==n) 
             { 
                 printf("* "); 
             } 
            printf("* "); 
         } 
         m--; 
         printf("\n"); 
     } 
     return 0; 
 }