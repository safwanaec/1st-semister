#include<stdio.h>

int main(void){

int a = 0;
a = printf ("4");
printf ("%d",a);

//printf returns 1

// bitwise and logical AND and OR &, &&, |, ||
printf("\n\n");
int x, y, z, temp;

printf("Enter 3 numbers.");

scanf("%d %d %d",&x,&y,&z);

if (x>(y&&z)){
        temp = x;
        x = y;
        y = temp;

        printf("\n%d",x);
        if (y>z){printf("\n%d\n%d",y,z);}
        else printf("\n%d\n%d",z,y);
}
else if (y>(x&&z)){
     temp = y;
     y = z;
     y = temp;

        printf("\n%d",y);
        if (x>z){printf("\n%d\n%d",x,z);}
        else printf("\n%d\n%d",z,x);
}
else if (z>(y&&x)){
        temp = z;
         z = x;
         z = temp;

        printf("\n%d",z);
        if (y>x){printf("\n%d\n%d",y,x);}
        else printf("\n%d\n%d",x,y);
}
printf("\n\n");

if (x<y){
        temp = x;
        x = y;
        y = temp;
}
if (y<z){
        temp = y;
        y = z;
        z = temp;
}
if (z<x){
        temp = z;
        z = x;
        x = temp;
}

printf("%d %d %d",x,y,z);

printf("\n\n");

if (x>y){

}
if (y>z){
        //temp = y;
        //y = z;
        //z = temp;
}
if (z>x){
        temp = x;
        x = z;
        z = temp;
}

printf("%d %d %d",x,y,z);

return 0;
}

