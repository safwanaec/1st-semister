#include<stdio.h>
const int MAX=3;
int main(void)
{
    int var = 20;
    int *ip;
    ip = &var;
    int var2[]={10,100,200};
    int i, *ptr[MAX];

    printf("Address of var variable: %x\n", &var);

    printf("Address stored in ip variable: %x\n", ip);

    printf("Value of *ip variable: %d\n", *ip);

    printf("Value of var variable: %d\n\n\n\n", var);

    for(i=0; i<MAX; i++)
    {
        ptr[i]=&var2[i];
    }

    for(i=0; i<MAX;i++)
    {
        printf("Value of var2[%d] = %d of address %x\n\n",i,*ptr[i],ptr[i]);
    }

    char str[50]={"C Programming"};

    char *ptr2;

    ptr2=&str;


    for(i=0; i<50;i++)
    {

        printf("%c",*ptr2);
        ptr2++;

        if(str[i]=='\0')
        {
            printf("\n\n%d\n\n",i);
            break;
        }
    }


    char *names[]=
    {
        "Zara Ali",
        "Nuha Ali",
        "Sara Ali",
        "Hina Ali"
    };

    for (i=0; i<4; i++)
    {
        printf("Value of names[%d] = %s and it's address is %x\n\n",i,names[i],&names[i]);
    }



    return 0;
}
