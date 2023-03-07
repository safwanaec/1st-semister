#include<stdio.h>
#include<math.h> 
    
int main(){   
    int marks,range,range1,range2;
    printf("Please enter marks: ");
    scanf("%d",&marks);

    printf("\nPlease enter single range: ");
    scanf("%d",&range);
    
    if(marks>range){
    printf("\nThe student has obtained more then %d marks.",range);
    }
    else printf("\nThe student has obtained less then or equal to %d marks.",range);
    
    printf("\n\nPlease enter start and end range: ");
    scanf("%d%d",&range1,&range2);
    
    if(marks>=range1 && marks<=range2){
    printf("\nThe student has obtained marks in the range of %d and %d",range1, range2);
    }
    else printf("\nOut of range!");
    
    
    return 0;
}