#include<stdio.h>
#include<math.h>

int a,b,c;

    

int main(){   
    
    printf("Enter the lenth of three sides of a triangle:");
    scanf("%d%d%d",&a,&b,&c);
    
    int s = a+b+c;
    
    double ar= sqrt(s*(s-a)*(s-b)*(s-c));
    
    printf("The area of the triangle is: %.3f",ar);
 
    
    return 0;
}