#include <stdio.h>

int main(void){

    int x,y=0,z, a =0;

    printf ("\n\nTo which number do you want the pattern to stop at: ");
    scanf ("%d",&z);
    printf ("\n\n");

    for(x = 1; x+a<=z; a++){

        for(y = 1; a+y<=z; y++){

            printf(" %d",a+y);


            }

        printf ("\n\n");


    }


return 0;
}
