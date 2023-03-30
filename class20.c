#include<stdio.h>
#include<stdlib.h>

main(void)
{
    FILE *fp;

    fp=fopen("input.txt","w+");

    for(int i=1; i<=10; i++)
    {
        for(int j=0; j<10; j++)
        {
            int random = rand() % 21 + 0;
            fprintf(fp,"%d\t",random);
        }
        fputs("\n",fp);
    }
    fclose(fp);

    return 0;
}
