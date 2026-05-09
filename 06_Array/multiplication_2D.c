#include <stdio.h>

int main() {
    int row, col;
    printf("enter 2 number: ");
    scanf("%d %d", &row, &col);
    int a[row][col], b[row][col], c[row][col];

    printf("Enter elements of first matrix:\n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            c[i][j] = 0;
            for(int k = 0; k < col; k++) {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }
    printf("Result Matrix:\n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}