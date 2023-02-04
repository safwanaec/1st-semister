#include <stdio.h>

int a = 10;

float x = 5, y = 6, z = 50;

int d, e, f;

int g = 10;

int h = 20;

int i = 50, j = 5;

float b = 10.5;

char c = 'A';


int main() {

   d = e = f = 50;

   printf("\n");

   printf("%f",b);

   printf("\n");

   printf("%.f",x + y + z);

   printf("\n");

   printf("%i",d + e + f);

   printf("\n");

   printf("%d", h - g);

   printf("\n");

   printf("%.1f",y/x);

   printf("\n");

   if (i>j){
        printf("amongst %i",i);
        printf(" and %i ",j);
        printf("the greater number is ");
        printf("%i",i);

   } else{
       printf("amongst %i",i);
       printf(" and %i ",j);
       printf("the greater number is ");
       printf("%i",j);

   }

   printf("\n");


   }

















