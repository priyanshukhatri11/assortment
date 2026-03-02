#include <stdio.h>

int main() {
    int row, col;

    printf("Enter the array's row size: ");
    scanf("%d", &row);

    printf("Enter the array's column size: ");
    scanf("%d", &col);

    int a[row][col];

    printf("\nEnter array's elements:\n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe transpose matrix of an array:\n");

    for(int i = 0; i < col; i++) {
        for(int j = 0; j < row; j++) {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}