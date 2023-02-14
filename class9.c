#include <stdio.h>

// TEACHER NAME: Rokonujjaman (from RU)

// CLASS NO: 3

// DATE: 14-02-2023

int x = 15000000000;

int main(void){




printf("\n\nThe value of x is: %d\n\n",x);

/*

The reason for the diffrent answer is because of the maximum bit count of 32.

the integer is converted into binary and removes the overflown bits from the top.

the 34th and 33rd bits were removed since we can only take 32 bits.

for the 34th bit the decimal equivalant is 2^33 and for the 33rd bit is 2^32.

so, adding the removed numbers to the answer will give you the value you had assinged at first!

now, the expected answer that should've been printed is 2^33 + 2^32 + 2115098112 = 15000000000

*/


printf("\n\n\n");











/* Display the decimal value of silected charecters
written by:
date:
*/

//local diclaretion

  char A        = 'A';

  char a        = 'a';

  char B        = 'B';

  char b        = 'b';

  char Zed      = 'Z';

  char zed      = 'z';

  char zero     = '0';

  char eight    = '8';

  char NL       = '\n';        // newline

  char HT       = '\t';        //horizontal tab

  char VT       = '\v';        //vertical tab

  char SP       = ' ';         //blank or space

  char BEL      = '\a';        //alert (bell)

  char dblQuote = '"';         //double quote

  char backSlash= '\\';        //backslash itself

  char oneQuote = '\'';        //single quote itself


  //statements

    printf("ASCII for char 'A' is: %d\n\n",A);

    printf("ASCII for char 'a' is: %d\n\n",a);

    printf("ASCII for char 'B' is: %d\n\n",B);

    printf("ASCII for char 'b' is: %d\n\n",b);

    printf("ASCII for char 'Z' is: %d\n\n",Zed);

    printf("ASCII for char 'z' is: %d\n\n",zed);

    printf("ASCII for char '0' is: %d\n\n",zero);

    printf("ASCII for char '8' is: %d\n\n",eight);

    printf("ASCII for char '\\n' is: %d\n\n",NL);

    printf("ASCII for char '\\t' is: %d\n\n",HT);

    printf("ASCII for char '\\v' is: %d\n\n",VT);

    printf("ASCII for char ' ' is: %d\n\n",SP);

    printf("ASCII for char '\\a' is: %d\n\n",BEL);

    printf("ASCII for char '\"' is: %d\n\n",dblQuote);

    printf("ASCII for char '\\' is: %d\n\n",backSlash);

    printf("ASCII for char '\'' is: %d\n\n",oneQuote);








    /*

this program will print four lines of inventory data on an inventory report

to give the user an idea of what a new report will look like. since this is not a real report,

no input is required. the data are all specified as constants.

    written by:

    date:
*/

//statements
  //print captions

printf("\n\n\n\tPart number\tQty on Hand\n\n");

printf("\n\n\n\tOn Order \tQty on Price\n\n");

//print data

printf("\t %06d\t\t%7d\t\t%7d\t\t $%7.2f\n",31235 ,22 ,86 ,45.62 );

printf("\t %06d\t\t%7d\t\t%7d\t\t $%7.2f\n",321 ,55 ,21 ,122. );

printf("\t %06d\t\t%7d\t\t%7d\t\t $%7.2f\n",28764 ,0 ,24 ,.75 );

printf("\t %06d\t\t%7d\t\t%7d\t\t $%7.2f\n",3232 ,12 ,0 ,10.91 );


//print end message

printf("\n\tEnd of Report\n");



////////HOME WORK:  Chapter 1 & 2 problem solving
////////            Chapter 5 ==== 5.1 , 5.2
////////NEXT TOPIC: Diffrent if statements(ch7) and for and while loops


return 0;

}
