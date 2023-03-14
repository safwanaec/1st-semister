#include<stdio.h>

int n, j=1;
int dg[10];
char first[19][15] = {"\0","one ","two ","three ","four ","five ","six ","seven ","eight ","nine ","ten ","eleven ","twelve ","thirteen ","fourteen ","fifteen ","sixteen ","seventeen ","eightteen ","ninteen "};
char tenth[10][15] = {"\0","ten ","twenty ","thirty ","fourty ","fifty ","sixty ","seventy ","eighty ","ninty "};
ml();
th(); 
hd();
tn();
st(); 
int main(void)
{
    printf("\n\n");
    printf("Please enter any number to get it in words: ");
    scanf("%d",&n);
    printf("\n\n");
    
    for(int i=1; i<=7; i++)
        {
            j = j*10;
            int k = j/10;
            
            dg[i] = n%j;
            dg[i] = dg[i]/k;
        }        
    
    if(n>0 && n<20)
        {
            st(n);
        }
    else if(n>19 && n<100)
        {
            tn(dg[2]);
            st(dg[1]);
        }
    else if(n>99 && n<1000)
        {
            st(dg[3]);
            hd(dg[3]);
            tn(dg[2]);
            st(dg[1]);
        }
    else if(n>999 && n<10000)
        {
            st(dg[4]);
            th(dg[4]);
            st(dg[3]);
            hd(dg[3]);
            tn(dg[2]);
            st(dg[1]);
        }
    else if(n>9999 && n<100000)
        {
            tn(dg[5]);
            st(dg[4]);
            th(dg[5]);
            st(dg[3]);
            hd(dg[3]);
            tn(dg[2]);
            st(dg[1]);
        }
    else if(n>99999 && n<1000000)
        {
            st(dg[6]);
            hd(dg[6]);
            tn(dg[5]);
            st(dg[4]);
            th(dg[6]);
            st(dg[3]);
            hd(dg[3]);
            tn(dg[2]);
            st(dg[1]);
        }
    else if(n>999999 && n<10000000)
        {
            st(dg[7]);
            ml(dg[7]);
            st(dg[6]);
            hd(dg[6]);
            tn(dg[5]);
            st(dg[4]);
            th(dg[6]);
            st(dg[3]);
            hd(dg[3]);
            tn(dg[2]);
            st(dg[1]);
        }
    printf("\n\n");
        
    return 0;
}
int st(a)
    {
        printf("%s",first[a]);
    }
int tn(a)
    {
        printf("%s",tenth[a]);
    }
int hd(a)
    { 
        if(a!=0)
        {
            printf("hundred ");
        }
    }
int ml(a)
    { 
        if(a!=0)
        {
            printf("million ");
        }
    }
int th(a)
    {   if(a!=0)
        {
            printf("thousand ");
        }
    }