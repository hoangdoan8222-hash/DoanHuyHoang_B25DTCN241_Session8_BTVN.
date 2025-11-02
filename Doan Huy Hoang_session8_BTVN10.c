#include <stdio.h>
#include <math.h>

int laSoNguyenTo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nMang vua nhap: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nCac so nguyen to trong mang la: ");
    int coNguyenTo = 0;
    for (int i = 0; i < n; i++) {
        if (laSoNguyenTo(arr[i])) {
            printf("%d ", arr[i]);
            coNguyenTo = 1;
        }
    }

    if (!coNguyenTo)
        printf("Khong co so nguyen to nao trong mang.");

    printf("\n");

    return 0;
}
ау g?i
Vi?t cho

