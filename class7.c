#include<stdio.h>

int main(){

     printf("Hello world!\n");

     printf("Hello world!C\n");

     printf("Hello world!C programming!\n\n\n");


     int a = 2147483647; //max space is 31 bits in positive. 2^31 - 1

     int b = -2147483648; //min space is 32 bits in negative. 2^32

     int c;

     c = a + b;

     printf("The sum of %d and %d is: %d\n\n\n",a,b,c);




while (a>0){

    printf("The largest number an integer can store is : %d\n",a);

    ++a;


}


printf("\n\n");



while (b<0){

    printf("The smalest number an integer can store is: %d\n\n\n",b);

--b;

}


int x = 2147483647;

printf("The value of the given integer 'x' is: %d",x);

int y;

y = 2*b+x+2; // this shit is compleate nonsense



printf("\n\n\nThe given output of the integer 'x' according to the formula should be: %d \n\n\n",y);



 if (x==y){

       printf("CONGRATULATIONS!\nYour formula worked!!\n\n");


   } else{

           printf("TOO BAD!\nYour formula didn't work!!\n\n");

   }





return 0;
}
