#include <stdio.h>
#define PI 3.14159265358979323846

float radius;

char unit[2];

int main(){
    printf("\n\nPlease enter the radius of the circle: ");
    scanf("%f",&radius);

    printf("\n\nPlease enter the unit: ");
    scanf("%s",&unit);

    printf("\n\nThe area of the circle is: %.3f %s^2\n\n", PI*radius*radius, unit);


return 0;
}
