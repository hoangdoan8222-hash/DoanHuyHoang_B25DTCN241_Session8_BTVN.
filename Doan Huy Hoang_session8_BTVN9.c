#include <stdio.h>

int main() {
    int rows, cols;
    int i, j;

    printf("Nhap so hang: ");
    scanf("%d", &rows);
    printf("Nhap so cot: ");
    scanf("%d", &cols);

    int arr[100][100];

    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nMang vua nhap:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\nCac phan tu nam tren duong bien la:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1)
                printf("%d ", arr[i][j]);
            else
                printf("  "); // kho?ng tr?ng ð? d? nh?n
        }
        printf("\n");
    }

    return 0;
}

