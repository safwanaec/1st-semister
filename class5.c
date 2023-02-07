#include <stdio.h>



int main(){

/*    int day = 3; //cases can be used like if else functions

    switch(){

case 1:

    printf("");

    break;

case 2:

    printf("");

    break;

default:

    printf("");


    }*/

    int i = 0;

    while (i<5){    //this is a while loop

        printf("%d \n",i);

        i++;}


    /*the do/while loop is a varient of the while loop. this loop will exexcute the code block once, before checking
    if the condition is true, then it will repeat the loop as long as the condition is true.*/

        //syntax

    /*do {

    }

    while (CONDITION);*/

        int j = 0;    // do while loop
    do {

        printf("%d\n",j);
        j++;
    }
    while(i<5);



    //for loop syntax

    /*for(s+1;s+2;s+3){

    }*/

    //example

    int k;

    for(k=0;k<5;k++){

        printf("%d\n",k);
    }


/*
statement 1 is excecuted(one time) before the execution of the code block.

statement 2 defines the condition for executing the code block.

statement 3 is executed (every time) after the code block has been executed.*/





    return 0;
}
