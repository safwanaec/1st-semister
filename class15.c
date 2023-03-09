#include<stdio.h>
int main(void){
    int n,a=1,b=0,i;

    /*printf("\n\nplease enter the value of n to calculate n!: ");
    scanf("%d",&n);

    if (n>0){
    for (int i=1; i<=n; i++){
        a=a*i;
    }
    printf("\n\n%d! = %d\n\n",n,a);
    }
    else printf("\n\nThe factorial of negetive numbers doesn't exist!\n\n");*/

    printf("please enter the value of n in the pattern\n\n-1+2-3+4+-n: ");
    scanf("%d",&n);

    printf("\n\nThe serise is: ");

    for(int i=1; i<=n; i++){

        if(i%2==0){
                printf("+%d",i);
                b=b+i;
        }
        else{
                printf("-%d",i);
                b=b-i;
        }
    }
    printf("\n\nThe answer is = %d\n\n",b);

return 0;
}
