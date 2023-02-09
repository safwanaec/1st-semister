#include <stdio.h>


int main(){

/*float y;

printf("Please enter any number to see if it's a positive or a negative number: ");

scanf ("%f",y);

printf("\n\nYour number is: %.2f",y);\

float x = y;*/

float x = 6;

if (x>0){

    printf("\n\n%.2f is a positive number!",x);
}
    else if (x<0){

        printf("\n\n%.2f is a negative number!",x);
    }

    else printf("\n\n%.2f is equal to 0!",x);

printf("\n\n");



return 0;

}
