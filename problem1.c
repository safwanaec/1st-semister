#include<stdio.h>



float i;

int cmd = 1;

int main()
{
 do{
    printf("\n\nPlease enter the Inch value: ");
    
    scanf("%f",&i);
    
    float c;
    
    c = i * 2.54;
    
    printf("\n\n%.2f inch is equal to %.2f centimeters.\n\n\n",i,c);
    
    printf("Would you like to run the program again?\n\n1.Yes\t\t\t2.No");
    
    printf("\n\nEnter choice: ");
    
    scanf("%i",&cmd);
    } while (cmd == 1);
    
 if (cmd !=1){
     printf("\n\nThank You for using this program!\nGood bye!\n\n");}
    
    
    return 0;
}