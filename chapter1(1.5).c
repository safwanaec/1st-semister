#include <stdio.h>
#include <string.h>

int main(){

    float temp;

    char unit[1];

    printf("\n\nPlease enter the temperature: ");
    scanf("%f",&temp);

    printf("\n\nPlease enter the UNIT of your entered temperature(C, F or K): ");
    scanf("%s",&unit);

    if (strcmp(unit,"C")==0 || strcmp(unit,"c")==0){
        printf("\n\n%.2f Celcius is equal to %.2f Fahrenheit or %.2f Kelvin\n\n",temp, ((temp*9)/5)+32, temp+273);
    }
    else if (strcmp(unit,"F")==0 || strcmp(unit,"f")==0){
            printf("\n\n%.2f Fahrenheit is equal to %.2f Celcius or %.2f Kelvin\n\n",temp, ((temp-32)*5)/9, ((temp-32)/1.8)+273);

    }
    else if (strcmp(unit,"K")==0 || strcmp(unit,"k")==0){
            printf("\n\n%.2f Kelvin is equal to %.2f Celcius or %.2f Fahrenheit\n\n",temp, temp-273, ((temp-273)*1.8)+32);
    }
    else printf("wrong input!!");

    //printf("\n\nUNIT (C, F or K): %s",unit);


return 0;
}
