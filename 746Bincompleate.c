#include<stdio.h>

int main()
{
    int n;

    //take the number of letters in the encoded word
    printf("Please enter the ammount of letters [between 1 and 2000] that you will enter : ");
    scanf("%d",&n);
    printf("\n\n");

    if (n>=1 && n<=2000)
    {
        char enw[n],dcw[n];
        printf("please enter the encoded word: ");
        scanf("%s",&enw);
        
        for(int x=0; x<=n; x++)
        {
            if(n%2==0)
            {
                
            }
            
        }
        
    }
    
    else
    {
        printf("You've entered the wrong format!!");
    }
    

    return 0;
}
