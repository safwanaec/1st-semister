#include <stdio.h>
#include <math.h>

int add(int x,int y){

    return x+y;
}


int sub(int j,int k){

    return j-k;
}

int main(){
    int a,b;
    printf("\n\nPlease enter two integer numbers:\n");
    scanf("%d%d",&a,&b);

    int sum = add(a,b);

    printf("\n\n%d + %d = %d\n\n",a,b,sum);

    int red = sub(a,b);

    printf("%d - %d = %d\n\n",a,b,red);



return 0;
}
