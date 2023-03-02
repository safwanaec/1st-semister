#include<stdio.h>
int main()
{

    int st1,st2,st3,mrtn;

    printf("\nPlease enter the marks of 3 students:\n");

    scanf("%d %d %d",&st1, &st2, &st3);

    printf("\nto get students with marks more then ___ \nenter range number:\n");

    scanf("%d",&mrtn);

    if (st1>mrtn)
        printf("\nstudent 1 has obtained %d which is more marks then %d\n",st1,mrtn);


    if (st2>mrtn)
        printf("\nstudent 2 has obtained %d which is more marks then %d\n",st2,mrtn);


    if (st3>mrtn)
        printf("\nstudent 3 has obtained %d which is more marks then %d\n",st3,mrtn);


    if (st1<40)
        printf("\nstudent 1 has obtained %d which is less then 40\n",st1);

    if (st2<40)
        printf("\nstudent 2 has obtained %d which is less then 40\n",st2);

    if (st3<40)
        printf("\nstudent 3 has obtained %d which is less then 40\n",st3);



    return 0;
}
