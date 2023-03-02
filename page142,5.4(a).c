#include<stdio.h>

int main()
{

    int second = 60, grade;
    
    printf("\n\nplease enter your grade:");
    scanf("%d",&grade);

    
    
    if( 60>grade && grade>49){
    
    second = second + 1;
    
    }
    
    printf("\n\nthe second value you get is: %d",second);
    
    
    
    return 0;
}