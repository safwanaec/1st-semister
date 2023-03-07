#include<stdio.h>
#include<math.h> 
    
int main(){   
    int x,a,b,c;
    
    printf("Please enter the value of a,b and c in the quadratic equation:\n\n\t\t\t\tax^2 ");
    printf("+ bx + c = 0\twhere,\n\n");
    printf("a =");
    scanf("%d",&a);
    printf("\nb =");
    scanf("%d",&b);
    printf("\nc =");
    scanf("%d",&c);
    printf("\n\n");
    
    if(a==0 && b==0){
    printf("No solution avalable!");
    }
    else if(a==0){
    printf("x = %.1f",-c/b);    
    }
    else if(((b*b)-(4*a*c))<0){
    printf("No real root avalable!");
    }
    else{
    float p = ((b*b)-4*a*c)/(2*a);
    double d = sqrt(p);
    //printf("p = %.1f\n\n",p);
    printf("here, x has two values\n\n");
    //printf("d = %.1f\n\n",d);
    printf("x1 = %.2f",-b+d);
    printf("\n\nx2 = %.2f\n\n",-b-d);
    }
    
    
    return 0;
}