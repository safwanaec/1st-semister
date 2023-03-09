#include<stdio.h>
int main(void){
    int n,k;

     printf("please enter the value of n to get it's multiplication table: ");
     scanf("%d",&n);
     printf("\n\n");

     for(int i=1; i<=n; i++){

        for(int j=1; j<=10; j++){
            k = j*i;

            if (i>=3&&i<=5&&j>4){

            }
            else printf("%d\t",k);

            /*if(k==10||k==12){
                printf("[*]");
            }*/
            //printf("\t");
        }
        printf("\n\n");

     }

return 0;
}
