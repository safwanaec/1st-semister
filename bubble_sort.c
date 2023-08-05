#include <stdio.h>

void sort();
void swap();
void print_num();
int main() 
{
    int array[]={1,2,3,4,5,6,7,8,9,10,11,22,33,44,55,66,77,88,99,0,2,3,3};
    int size = sizeof(array)/sizeof(array[0]);
    
    printf("\n\nThere are %d numbers in the array\n\n",size);
    
    sort(&array,size);
    print_num(&array,size);
    
    return 0;
}

void sort(int *array, int size)
{
    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-1; j++)
        {
            if(array[j]>array[j+1])
            {
                swap(&array[j], &array[j+1]);
                
            }
            
            else continue;
        }



    }
}

void swap(int *a, int *b)
{
    *a=*a+*b,*b=*a-*b,*a=*a-*b;
}

void print_num(int *array, int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d\n",array[i]);
    } 
}