#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <inttypes.h>

int mul (int a, int b);

int main()/* principle function*/{

    int a,b;
    double c;

    a = 5;
    b = 10;
    c = mul (a,b);

    printf("");
    printf("Multiplication of %d and %d is %f \n",a,b,c);
    c = sqrt(b);
    printf("square root of %d is %f\n",b,c);


    int k =-7, l;
    k=abs(l);
    printf("hellow C abs value of %d is %d\n",k,l);
    l=pow(k,k);
    printf("Power value of %d is %d\n",k,k,l);


return 0;//return data type
}
int mul (int x, int y)

{
    int p;
    p=x*y;
    return(p);
}




