#include<stdio.h>

int main(){
    int n;
    printf("Enter the max number you want the pattern to have: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        for(int j=n-i; j>0; j--){
                printf("%d ",j);
        }
        printf("\n");

        for(int k=0;k<=i;k++){
        printf("  ");
        }
    }

    int a = 9,b=7,c=6;
    printf("\n");
    for(int x=0; x<11; x++){
        printf("%d ",a);
    }
    printf("\n");

    for(int x=1; x<11; x++){
        printf("%d",b);
        for(int y=x-1;y<9;y++){
            printf("  ");
        }
        printf("%d\n",c);
    }



    for(int x=0; x<1; x++){
        printf("%d ",a);
    }

return 0;
}
