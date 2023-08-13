#include <stdio.h>

void symmetric_pair(int arr[][2], int size)
{
    printf("\n\n\n");

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i][0] == arr[j][1] && arr[i][1] == arr[j][0])
            {
                printf("{%d,%d} and {%d,%d} are symmetric pairs.\n", arr[i][0], arr[i][1], arr[j][0], arr[j][1]);
            }
        }
    }
}

int main() {
    int rows, cols = 2;

    printf("Enter the number of rows(x): ");
    scanf("%d", &rows);

    printf("The number of column is %d\n\n",cols);

    int arr[rows][cols];

    int size = rows;

    printf("Enter the elements of the 2D array:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("matrix%d [%d][%d] =\t",size,i+1,j+1);
            scanf("%d", &arr[i][j]);
        }
    }


    symmetric_pair(arr, size);

    return 0;
}
