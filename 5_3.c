#include <stdio.h>


int main (void){

int x = 1, y = 1, n;
printf ("\n\n");
printf ("please enter the value of n:");

scanf("%d",&n);

if (n > 0){

    x = x+1;

    y = y-1;
}
printf ("\n\n");
printf ("The value of (x,y) = (%d,%d)", x, y);
printf ("\n\n");


return 0;
}
