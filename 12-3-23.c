#include <stdio.h>

void findSymmetricPairs(int arr[][2], int size) {
    printf("Symmetric pairs:\n");

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i][0] == arr[j][1] && arr[i][1] == arr[j][0]) {
                printf("(%d,%d) and (%d,%d) are symmetric pairs.\n", arr[i][0], arr[i][1], arr[j][0], arr[j][1]);
            }
        }
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter the elements of the 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int size = sizeof(arr) / sizeof(arr[0]);

    findSymmetricPairs(arr, size);

    return 0;
}