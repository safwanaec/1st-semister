#include<stdio.h>



int main(){ 
  
 short int x = 32767; 
  
 int a,b,c; 
  
 printf("\n\n\nvalue of x : %d\n\n\n",x); 
  
 printf("\n welcome. this program adds\n"); 
  
 printf("three numbers. enter the three numbers\n"); 
  
 printf("in the form: nnn nnn nnn <return>\n\n\n"); 
  
 //scanf("%d%d%d",&a,&b,&c); 
  
 /*printf("Enter the value of a : \n"); 
  
 	scanf("%d",&a); 
  
 printf("Enter the value of b : \n"); 
  
 	scanf("%d",&b); 
  
 printf("Enter the value of c : \n"); 
  
 	scanf("%d",&c); 
  
 printf("\n\n\na is %d \nb is %d\nc is %d",a,b,c); 
  
 int sum; 
  
 sum = a+b+c; 
 
 printf("\n\n\nThe total sum of %d, %d and %d is: %d",a,b,c,sum); 
  
 printf("\n\n\n\n"); 
  
  
 float q; 
  
 printf("Enter the percentage value: \n"); 
  
 scanf("%f",&q); 
  
 float w = q/100; 
  
 int m,t; 
  
 printf("\n\n"); 
  
 printf("Enter the amount of money: \n"); 
  
 scanf("%d",&m); 
  
 printf("\n\n"); 
  
 printf("Enter the amount of time in days: \n"); 
  
 scanf("%d",&t); 
  
 float T = t/365; 
  
 float f = w*m*T; 
  
 printf("\n\n"); 
  
 printf("The total profit will be: %5.2f Taka",f); 
  
 printf("\n\n"); */
  
  
   
 float cr, pi;
 
 char unitc[7];
  
     printf("To calculate the total area, circumference of a circle, please enter the circles radius: \n");
                                         
  scanf("%f", &cr);
    
  printf("\n");
  
  printf("Please enter the unit of choice: \n");
  
  scanf("%s",unitc);
  
    pi = 3.1416;
    
    float ca = pi * cr * cr;
    
    float cir = 2 * pi * cr;
    
    float cv = 4/3 * pi *cr * cr * cr;
    
     printf("\n\nThe area of the circle is : %.3f %s^2",ca, unitc);
     
     printf("\n\nThe circumference of the circle is : %.3f %s",cir, unitc);
     
     printf("\n\nThe volume of the circle is : %.3f %s^3",cv, unitc);
    
  printf("\n\n\n\n");   
     
   float lenth, wedth;
   
   char unitr[7];
   
   printf("To calculate the total area of a ractangle, please enter the\n");
   
  printf("lenth:\n"); 
   
  scanf("%f", &lenth); 
   
  printf("wedth:\n"); 
   
  scanf("%f", &wedth);
   
  printf("Please enter the unit of choice: \n");
  
  scanf("%s",unitr); 
  
   float ra = lenth * wedth;
     
  printf("\n\nThe total area of the ractangle is : %.3f %s^2",ra, unitr); 
   
  
  
  
  
  
 return 0; 
