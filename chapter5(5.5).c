#include<stdio.h>
#include<math.h> 
    
int main(){   
    int mm,mp,mc,mt,rangeall,rangemp,range1,range2,range3,temp;
    printf("Please enter marks in Mathmatics: ");
    scanf("%d",&mm);
    
    printf("Please enter marks in Physics: ");
    scanf("%d",&mp);
    
    printf("Please enter marks in Chemistry: ");
    scanf("%d",&mc);


        temp=mm/10;
        temp=temp*10;
        range1=temp;
       
        temp=mp/10;
        temp=temp*10;
        range2=temp;
        
        temp=mc/10;
        temp=temp*10;
        range3=temp;
   
    rangemp=mm+mp;
        temp=rangemp/10;
        temp=temp*10;
        rangemp=temp;
    
    rangeall=mm+mp+mc;
        temp=rangeall/10;
        temp=temp*10;
        rangeall=temp;
    
    
    
    printf("\nMarks in Mathmatics >= %d",range1);
    
    printf("\nMarks in Physics >= %d",range2);
    
    printf("\nMarks in Chemistry >= %d",range3);
    
    printf("\nTotal in all 3 subjects >= %d",rangeall);
    
    printf("\nTotal in Mathmatics and Physics >= %d",rangemp);
    
    
    return 0;
}