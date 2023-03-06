#include<stdio.h>
#include<math.h>
    
int main(){   
    
    int x1,y1,x2,y2;
    
    printf("Please enter the parameters of point one (x1,y1):\n");
    scanf("%d%d",&x1,&y1);
    
    printf("\n");
    
    printf("Please enter the parameters of point two (x1,y1):\n");
    scanf("%d%d",&x2,&y2);
    
    double d = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    
    printf("The distance between point one and point two is: %f",d);
    
    
    return 0;
}