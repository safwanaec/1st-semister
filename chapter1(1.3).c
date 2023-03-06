#include <stdio.h>

int main(){
    int tbl;

    printf("Which multiplication table do you want to view?\n\n-->");
    scanf("%d",&tbl);
    printf("\n\n");

    for(int i = 0; i<=10; i++){

        printf("\t\t%d x %d = %d\n\n",tbl,i,tbl*i);
    }

return 0;
}
