#include<stdio.h>
int main()
{

    int second = 60, number;

    printf("\n\nplease enter your number:");
    scanf("%d",&number);



    if(0>number){


        printf("\nout of range!\n");}
    else if(number>100){

    printf("\nout of range!\n");}

     else printf("\nin range!\n");


    return 0;
}

