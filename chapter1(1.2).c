#include <stdio.h>

int main(){

    char name[30];
    int doornum, ZIP;
    char strtname[30];
    char cityname[20];

    printf("\n\nPlease enter your name: ");
    scanf("%s",&name);

    printf("\n\nPlease enter your door number: ");
    scanf("%d",&doornum);

    printf("\n\nPlease enter your street name: ");
    scanf("%s",&strtname);

    printf("\n\nPlease enter the name of your city: ");
    scanf("%s",&cityname);

    printf("\n\nPlease enter your ZIP code: ");
    scanf("%d",&ZIP);


    printf("\n\n\nName\t\t:\t%s",name);
    printf("\nDoorNo, Street\t:\t%d, %s",doornum,strtname);
    printf("\nCity, Pin code\t:\t%s, %d\n\n",cityname,ZIP);

return 0;
}
