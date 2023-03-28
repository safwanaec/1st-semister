#include<stdio.h>

int main()
{
    int s1=0,s2=0,i,j,k;
    
    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j+=2)
        {
            s1=s1+j;
        }
        
        for(k=1; k<10; k+=2)
        {
            s2=s2+k;
        }
    }
    
    printf("%d %d",s1,s2);
    return 0;
}