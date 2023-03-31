#include<stdio.h>
#include<stdlib.h>

int x,y,z=0,n;
char fname[100];

FILE *fp;

int writenum();

int frequency_check();

int main(void)
{
    printf("What is the file name?(include the extention)\n>> ");
    scanf("%s",fname);

    fp=fopen(fname,"w+");

    if(fp== NULL )
    {
        printf("\nCan not open file with no name!!\n\n");
    }
    else
    {
        printf("\nFile created or opened succesfully!!\n\n");
    }
    printf("How many random numbers do you want to enter into the file?\n\n>> ");
    scanf("%d",&n);

    printf("\n\nWhat is the range of the random numbers?\n\nStarting range>> ");
    scanf("%d",&x);
    printf("\nEnding range>> ");
    scanf("%d",&y);

    int num[n];
    writenum(x,y,n,num);

    frequency_check(num,x,y,n);

    fclose(fp);
    
    return 0;
}

int writenum(int a,int b,int c,int d[])
{
    int rows = c/10;
    if(c%10!=0)
    {
        rows++;
    }
    int extra_cells= c%10;

    int cell_per_row = 10;

    fprintf(fp, "\t|");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cell_per_row; j++)
        {
            int random= rand() % (b+1) + a;
            d[z]=random;
            z++;
            fprintf(fp, "%d\t\t", random);

            if(rows!=((int)c/10) && i==((int)(c/10)))
            {
                cell_per_row = extra_cells;
            }
        }
        if(i==((int)(c/10)))
        {
            for(int k=0; k<(10-extra_cells); k++)
            {
                fprintf(fp,"\t\t");
            }
            fprintf(fp,"|");
        }
        else if (i<(int)c/10)
        {
            fprintf(fp,"|\n\t|");
        }
    }
    return 0;
}


int frequency_check(int a[],int b,int c,int d)
{
    printf("\n\nThe frequency of the written numbers in the text file are given bellow:\n\n");
    int k = 0, frequency[(c+1)];

    for(int i=b; i<=c; i++)
    {
        frequency[i]=0;
    }

    for(int i=0; i<d; i++)
    {
        frequency[a[i]]++;
    }

    for(int i=b; i<=c; i++)
    {
        if(frequency[i]!=0)
        {
            printf("The number\t%d\twas written\t%d\ttimes\n\n",i,frequency[i]);
        }
    }
    return 0;
}
