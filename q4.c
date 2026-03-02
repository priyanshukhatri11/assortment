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

    int r, c;
    int sumRow = 0, sumCol = 0;

   
    printf("\nEnter row number: ");
    scanf("%d", &r);

    printf("Elements of row %d: ", r);
    for(int j = 0; j < col; j++) {
        printf("%d ", a[r][j]);
        sumRow += a[r][j];
    }

    printf("\nThe sum of row %d: %d\n", r, sumRow);

    printf("\nEnter column number: ");
    scanf("%d", &c);

    printf("Elements of column %d: ", c);
    for(int i = 0; i < row; i++) {
        printf("%d ", a[i][c]);
        sumCol += a[i][c];
    }

    printf("\nThe sum of column %d: %d", c, sumCol);

    return 0;
}