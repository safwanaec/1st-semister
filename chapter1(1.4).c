#include <stdio.h>

int main(){
    float a, b, c, y;

    printf("\n\nEnter the value of a ,b & c:\n");
    scanf("%f%f%f",&a,&b,&c);

    y = a/(b-c);

    printf("\n\nFor\t'x = a/(b-c)' we get,\n\n\tx = %.0f/(%.0f-%.0f)\n\n-->\tx=%.2f\n\n",a,b,c,y);
    //printf("a=%d\nb=%d\nc=%d\nd=%d\ny=%d",a,b,c,d,y);


return 0;
}
