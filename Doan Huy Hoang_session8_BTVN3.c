#include <stdio.h>

int main() {
    int a[5] = {1, 3, 5, 7, 9}; 
    int i, coChan = 0;

    printf("Cac so chan trong mang: ");
    for (i = 0; i < 5; i++) {
        if (a[i] % 2 == 0) {
            printf("%d ", a[i]);
            coChan = 1;
        }
    }

    if (!coChan)
        printf("Mang khong chua so chan.");

    return 0;
}

