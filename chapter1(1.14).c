#include<stdio.h>
#include<math.h>
    
int main(){   
    
    int x1=0,y1=0,x2,y2;
    
    printf("Please enter the parameters of a point in the circumference (x1,y1):\n");
    scanf("%d%d",&x2,&y2);
    
    printf("\n");
    
    double r = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    
    float area = 3.1416*r*r;
    
    printf("The area of the circle is: %f",r);
    
    
    return 0;
}