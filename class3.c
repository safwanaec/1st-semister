#include <stdio.h>

char safwan = 'A';

int x = 14, y = 6;

int mynum = 15;

int myothernum = 25;

int sum1 = 10;

int a = 50, b = 5;

float c = 6.5;

float z = 5.99;

float j = 16.6;

int k = 20;

int main() {

   mynum = myothernum;

   int sum2 = sum1 * 10;

   int sum3 = sum2 - 80;

   printf("\nhello world\n");

   printf("\nHello.\n\nI am safwan.\n\ni am a student of Ashrai Engineering college.\n\nI am from Narayangunj.\n\n");

   printf("%c\n\n", safwan);/*character variable print*/

   printf("%.2f\n\n", z);/*float variable print*/

   printf("my number is: %i\n\n", mynum );//integer variable print

   printf("\n");

   if (x<y){

       printf("\n%i is smaller then %i\n\n",x,y);

   } else if (x>y){

           printf("%i is greater then %i",x,y);

   } else if (x>y){

           printf("%i is equal to %i",x,y);

   }

   printf("\n\n\n\n");


   printf("sum1 = %i\n\nsum2 = %i\n\nsum3 = %i\n\n",sum1,sum2,sum3);

   printf("a*b = %i\n\na/b = %i\n\nb*c = %.3f\n\n",a*b,a/b,b*c);

   printf("k-j = %.3f\n\njk = %.3f\n\n",k-j,j*k);


   return 0;

}
