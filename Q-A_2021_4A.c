#include <stdio.h>
#include <math.h>
#define PI 3.1416

double arcxy();
int main()
{
    int n;

    printf("This program takes the co-ordinates of 3 points where,\n\t\tO = center of a circle\n\t\t");
    printf("A = a point on the circles curcumfrance\n\t\tB = a point on the circles curcumfrance\n\n");
    printf("To calculate the arc distance between point A and B\n\n");

    printf("How many times do you want to test this program?");
    scanf("%d",&n);
    int Ax[n], Ay[n], Bx[n], By[n], Ox[n], Oy[n];

    for(int i=0; i<n; i++)
    {
        printf("Test no: %d\n\n",i+1);
        printf("Please enter the co-ordinate (x,y) of point O: ");
        scanf("%d %d",&Ox[i],&Oy[i]);

        printf("Please enter the co-ordinate (x,y) of point A: ");
        scanf("%d %d",&Ax[i],&Ay[i]);

        printf("Please enter the co-ordinate (x,y) of point B: ");
        scanf("%d %d",&Bx[i],&By[i]);
    }

    arcxy(Ox,Ax,Bx,Oy,Ay,By,n);

    return 0;
}

//O(x1,y1) A(x2,y2) B(x3,y3) n=m
double arcxy(int x1[],int x2[],int x3[],int y1[],int y2[],int y3[],int m)
{
    double L[2], C[2], Theta, arcAB1[m], arcAB2[m],AB;

    for(int i=0; i<m; i++)
    {
        L[0]=sqrt(((x1[i]-x2[i])*(x1[i]-x2[i]))-((y1[i]-y2[i])*(y1[i]-y2[i])));
        L[1]=sqrt(((x1[i]-x3[i])*(x1[i]-x3[i]))-((y1[i]-y3[i])*(y1[i]-y3[i])));

        C[0]=2*PI*L[0];
        C[1]=2*PI*L[1];

        AB = sqrt(((x3[i]-x2[i])*(x3[i]-x2[i]))-((y3[i]-y2[i])*(y3[i]-y2[i])));
        Theta = acos((pow(L[0],2)+pow(L[1],2)-pow(AB,2))/2*L[0]*L[1]);

        arcAB1[i]= Theta * L[0];
        arcAB2[i]= Theta * L[1];

        printf("For test no. %d the results are: %lf (OA)  or  %lf (OB)",i+1,arcAB1[i], arcAB2[i]);
    }
    
}