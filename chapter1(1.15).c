#include<stdio.h>
#include<math.h>
    
int main(){   
    
    int x1,y1,x2,y2;
    
    printf("Please enter the parameters of point one in the circle (x1,y1):\n");
    scanf("%d%d",&x1,&y1);
    
    printf("\n");
    
    printf("Please enter the parameters of point two in the circle (x1,y1):\n");
    scanf("%d%d",&x2,&y2);
    
    double d = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    
    float r = d/2;
    
    printf("The area of the circle is: %f",3.1416*r*r);
    
    
    return 0;
}