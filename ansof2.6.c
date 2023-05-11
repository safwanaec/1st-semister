#include <stdio.h>

struct student
    {
        int roll;
        char name[30];
        int marks;
    };

int main()
{
    struct student s[5];



    for(int i=1; i<=3; i++)
    {
        s[i].roll=i;

        printf("For roll number %d:\n",i);
        printf("Enter name: ");
        scanf("%s",&s[i].name);
        printf("Enter marks: ");
        scanf("%d",&s[i].marks);
        printf("\n\n");

    }

    printf("Displaying Information:\n\n");
    //printf("\n");

    for(int i=1; i<=3; i++)
    {
        printf("Roll number: %d\n",s[i].roll);
        printf("Name: %s\n",s[i].name);
        //printf("\n");
        printf("Marks: %d\n\n",s[i].marks);

    }

    return 0;
}
