#include<stdio.h>



int main(){ 
  
 short int x = 32767; 
  
 int a,b; 
  
 /*printf("\n\n\nvalue of x : %d\n\n\n",x); 
  
 printf("\n welcome. this program adds\n"); 
  
 printf("three numbers. enter the three numbers\n"); 
  
 printf("in the form: nnn nnn nnn <return>\n\n\n"); 
  
 //scanf("%d%d%d",&a,&b,&c); 
  
 printf("Enter the value of a : \n"); 
  
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
  
  */
  
int c;
  
printf("This program can do some basic mathmatical functions.\nPlease give the correct commands in the correct places to get the optimal answer.\n\n\n");
  
int re = 1;

int ure;

do{
  
 printf("The basic functions you can do with this program are:\n\n1. Calculate the profit you get by depositing money in a bank.\n\n2. Calculate the total area, circumference & the volume of a circle.\n\n3. Calculate the total area of a ractangle.\n\n4. Calculate the area of a triangle.\n\n\nPlease enter your choice number: \n");
 
 scanf("%d",&c);
 
 printf("\n\n\n");
 
 if(c==1) { 
  
 	float q; 
  
 	printf("Enter the percentage value: \n"); 
  
 	scanf("%f",&q); 
  
  float w = q/100; 
  
 	int m,t; 
  
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
  
  printf("\n\n\n\n\n\n");
 
  printf ("Would you like to run the program again?\n\n[1].YES\n\n[2].NO\n\n");
    
  scanf("%d",&ure);
    
    if (ure == 1){ re =1;}
    
    else if (ure ==2){ re = 2;}
    
    else re =3;
   
 }
 		
 else if (c == 2){
   
 	float cr, pi;
 
 	char unitc[7];
  
  printf("To calculate the total area, circumference & the volume of a circle, please enter the circles radius: \n");
                                         
  scanf("%f", &cr);
    
  printf("\n");
  
  printf("Please enter the unit of choice: \n");
  
  scanf("%s",unitc);
  
  pi = 3.1416;
    
  float ca = pi * cr * cr;
    
  float cir = 2 * pi * cr;
    
  float cv = 4/3 * pi *cr * cr * cr;
    
  printf("\n\nThe circumference of the circle is : %.3f %s",cir, unitc);
     
  printf("\n\nThe area of the circle is : %.3f %s^2",ca, unitc);
     
  printf("\n\nThe volume of the circle is : %.3f %s^3",cv, unitc);
              
  printf("\n\n\n\n\n\n");
 
  printf ("Would you like to run the program again?\n\n[1].YES\n\n[2].NO\n\n");
    
  scanf("%d",&ure);
    
    if ( ure == 1){ re =1;}
    
    else if (ure ==2){ re = 2;}
    
    else re =3;
              
 }
              
 else if (c == 3){
    
  //printf("\n\n\n\n");   
     
  float lenth, wedth;
   
  char unitr[7];
   
  printf("To calculate the total area of a ractangle, please enter the\n");
   
  printf("lenth:\n"); 
   
  scanf("%f", &lenth); 
   
 	printf("wedth:\n"); 
   
  scanf("%f", &wedth);
   
  printf("Please enter the unit of choice: \n");
  
  scanf("%s", &unitr); 
  
  float ra = lenth * wedth;
     
  printf("\n\nThe total area of the ractangle is : %.3f %s^2",ra, unitr);
  		    
  printf("\n\n\n\n\n\n");
 
  printf ("Would you like to run the program again?\n\n[1].YES\n\n[2].NO\n\n");
    
  scanf("%d",&ure);
    
    if ( ure == 1){ re =1;}
    
    else if (ure ==2){ re = 2;}
    
    else re =3;
  		    
 } 
  		
 else if (c == 4){ 
    
  //printf("\n\n\n\n");
  
  float baset, hightt;
  
  char unitt [7];
  
  printf("To calculate the area of a triangle please type in the following parameters\n");
  
  printf("\n");
  
  printf("Base: \n");
  
  scanf("%f", &baset);
  
  printf("\n");
  
  printf("Hight: \n");
  
  scanf("%f", &hightt);
  
  printf("\n");
  
  printf("Unit of choice: \n");
  
  scanf("%s", &unitt);
  
  float areat = 0.5 * baset * hightt;
  
  printf("\n\nThe area of the given triangle is: %.2f %s^2\n\n", areat, unitt);
  		  
  printf("\n\n\n\n\n\n");
    
  printf ("Would you like to run the program again?\n\n[1].YES\n\n[2].NO\n\n");
    
  scanf("%d",&ure);
    
    if ( ure == 1){ re =1;}
    
    else if (ure == 2){ re = 2;}
    
    else re = 3;

 }
 
 else printf("You've entered the wrong choice!");
 
   printf("\n\n\n\n\n\n");
 
   printf ("Would you like to run the program again?\n\n[1].YES\n\n[2].NO\n\n");
    
   scanf("%d",&ure);
    
    if ( ure == 1){ re =1;}
    
    else if (ure ==2){ re = 2;}
    
    else re =3;
        
  } while(re == 1);
  
  
  
do{ printf("Thank you for using the program!"); 
  
break;
  
} while(re == 2);
    
    
do{printf("Wrong command!!"); 
   
break;
   
} while(re == 3);
    
/* int ure;
    
printf ("Would you like to run the program again?\n\n[1].YES\n\n[2].NO\n\n");
    
scanf("%d",%ure);
    
if ( ure == 1){ re =1}
    
else if (ure ==2){ re = 2}
    
else re =3;
    
*/
    
    
    
    
    
    
    
    
    
    
    
        
 return 0; 
 }
