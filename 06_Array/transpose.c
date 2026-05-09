#include <stdio.h>

int main() {
    int row, col;

    printf("Enter rows and columns: ");
    scanf("%d %d", &row, &col);

    int a[row][col];

    printf("Enter matrix elements:\n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Transpose Matrix:\n");
    for(int i = 0; i < col; i++) {
        for(int j = 0; j < row; j++) {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}