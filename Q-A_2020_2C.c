#include<stdio.h>
int main()
{
    int num[13]={5,10,15,20,11,30,35,40,45,50,0,65,20};
    int i=0,sum=0;
    int j=0;
    for(j=0; j<10; j++)
    {
        sum=sum+num[i];
        i=i+1;
    }
printf("%3d",sum);
return 0;
}
