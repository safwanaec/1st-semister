#include <stdio.h>

int num_scan(int n, int x[])
{
    printf("If test case digits are a,b,c (0<=a,b,c<=9)\n");

    for (int i = 0; i < n; i++)
    {
        printf("\n");
        scanf("%d", &x[i]);
    }

    return 0;
}

int num_assaing(int x[], int num[][3], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            num[i][j] = x[i] % 10;
            x[i] = x[i] / 10;
        }
    }
    return 0;
}

int num_check(int num[][3], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (num[i][0] + num[i][1] >= 10 || num[i][0] + num[i][2] >= 10 || num[i][1] + num[i][2] >= 10)
        {
            printf("YES!\t\t(for %dth number)\n\n", i + 1);
        }
        else
        {
            printf("NO!\t\t(for %dth number)\n\n", i + 1);
        }
    }
    return 0;
}

int main()
{
    int n;
    printf("Enter the number of test cases!(1<=test case<=1000)\n");
    scanf("%d", &n);
    if (n < 1 || n > 1000)
    {
        printf("\n\ninvalid input!\n\n");
        return 1; // Return non-zero to indicate an error.
    }

    int num[n][3], x[n];

    num_scan(n, x);
    num_assaing(x, num, n);
    printf("\n\n\n");
    num_check(num, n);

    return 0;
}
