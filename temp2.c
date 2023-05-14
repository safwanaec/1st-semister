#include<stdio.h>
 
int main()
{
    int n, count=0;
 
    scanf("%d",&n);
 
    char word[n][100];
 
    for(int i=1; i<=n; i++)
    {
        scanf("%s",word[i]);
    }
    printf("\n\n");
 
    for(int i=1; i<=n; i++)
    {
        count = 0;
        for(int j=1; j<=100; j++)
        {
            if(word[i][j]!='\0')
            {
                count++;
            }
 
            else break;
 
        }
 
        if(count<10)
        {
            printf("%s\n",word[i]);
        }
        else printf("%c%d%c\n",word[i][0],count,word[i][count]);
    }
 
    return 0;
}