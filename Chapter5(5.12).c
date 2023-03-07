#include<stdio.h>

int main(){
    float unit, ubill, bill, temp;
    float charge = 100.0;

    printf("\nEnter your electricity usage in units: ");
    scanf("%f",&unit);

    if(unit<=200){
        ubill = (unit*80)/100;
        bill = ubill+charge;
        printf("\n\nYour total electricity bill is Rs. %.2f\n\n",bill);
    }
    else if(unit>200 && unit<=300){
            temp = unit - 200;
            ubill = ((200*80)+(temp*90))/100;
            bill = ubill+charge;
            printf("\n\nYour total electricity bill is Rs. %.2f\n\n",bill);
        }
    else if(unit>300 && unit<=400){
            temp = unit - 300;
            ubill = ((200*80)+(100*90)+(temp*100))/100;
            printf("%f",ubill);
            bill = ubill+charge;
            printf("\n\nYour total electricity bill is Rs. %.2f\n\n",bill);
        }
    else if(unit>400){
            temp = unit - 300;
            ubill = ((200*80)+(100*90)+(temp*100))/100;
            bill = ubill + charge;
            temp = bill + ((bill/100)*15);
            bill = temp;
            printf("\n\nYour total electricity bill is Rs. %.2f\n\n",bill);
        }

return 0;
}
