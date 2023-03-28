#include<stdio.h>

int main()
{
    char month[12][12]={"january","february","march","april","may","june","july","august","september","october","november","december"};
    
    int i;
    for(i=0; i<12; i++)
    {
        printf("Text: %s\n",month[i]);
    }
    return 0;
}