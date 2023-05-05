#include<stdio.h>

int dayOfTheWeek(int day, int month, int year) 
{
    // Write your code here.

    // 1st january 0000 was saturday

    int monthp[13] ={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int p=0;

    if(year%4==0)
        {
            monthp[2]=29;
        }

    for(int n=month-1; n>=0; n--)
        {
            day = day+monthp[n];
        }
    
    for(int n=year; n>0; n--)
        {
            if(n%4==0)
                {
                    day=day+366;
                }
            else
                {
                    day=day+365;
                }
        }

    char dayOfWeek[8][]={"\0","saturday","sunday","monday","tuesday","wednesday","thursday","friday"};

    while (day > 7) {
      day = day - 7;
      p++;
    }

    printf("%s\n\n", dayOfWeek[day]);

    return 0;
}


int main()
{

    int day,month,year,n;

    scanf("%d",&n);

    for(int i=n; i>=0; i--)
    {
        scanf("%d %d %d", &day,&month,&year);
        dayOfTheWeek(day,month,year);
    }
    


    return 0;
}

