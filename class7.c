#include <stdio.h> 
#include <stdlib.h> 
  
 int main() 
 { 
     printf("Hello world!\n"); 
  
     printf("Hello world!C\n"); 
  
     printf("Hello world!C programming!\n\n\n"); 
  
  
     int a = 2147483647; //max space is 31 bits in positive.
 
     int b = -2147483648; //min space is 32 bitsin negative.
  
     int c; 
  
     c = a + b; 
  
     printf("The sum of %d and %d is: %d\n\n\n",a,b,c); 
  
      while (a>0){ 
  
         printf("The largest number an integer can store is : %d\n",a); 
  
         ++a; 
  
  
     }
  
  printf("\n\n"); 
    
  while (b<0){ 
  
         printf("The smalest number an integer can store is: %d\n\n\n",b); 
  
         --b; 
 
      }
      
      
      int x = 2147483648;
      
      printf("%d",x);
      
  
  
     return 0; 
 }
