#include<stdio.h>

int main()
{
    FILE *f1;
    char c;

    f1= fopen("inputfile.txt","r");

    if(f1==NULL)
    {
        printf("File error!!!!!!!!!");
    }

    /*while ((c=putc(c,f1))!="EOF")
    {
        printf("%c",f1);
    }
    fclose(f1);*/

    while (c=fgetc(f1)!=EOF)
    {
        printf("%c",c);
    }
    fclose(f1);


    return 0;
}
