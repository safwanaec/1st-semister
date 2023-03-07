#include<stdio.h>
#include<math.h>
int j = 0; 
    
int main(){   
    int a,b,c,d,m,n;
    printf("\nEnter the values of a,b,c,d,m,n: \n");
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&m,&n);
    
    printf("\nFor \n\t%d X1 + %d X2 = %d\tAnd\n\t%d X1 + %d X2 = %d\n\n",a,b,m,c,d,n);
    
    printf("\n\t\t     %d*%d - %d*%d",m,d,b,n);
    printf("\n\t\tX1 = --------------\t= %d",((m*d)-(b*n))/((a*d)-(c*b)));
    printf("\n\t\t     %d*%d - %d*%d",a,d,c,b);
    printf("\n");
    printf("\n\t\t     %d*%d - %d*%d",n,a,m,c);
    printf("\n\t\tX2 = --------------\t= %d",((n*a)-(m*c))/((a*d)-(c*b)));
    printf("\n\t\t     %d*%d - %d*%d",a,d,c,b);
    
    return 0;
}