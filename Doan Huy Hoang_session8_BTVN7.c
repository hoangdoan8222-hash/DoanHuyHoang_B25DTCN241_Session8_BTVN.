#include <stdio.h>

int main() {
    int n, i;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int a[n]; 
    for (i = 0; i < n; i++) {
        do {
            printf("Nhap phan tu thu %d (so le): ", i + 1);
            scanf("%d", &a[i]);
            if (a[i] % 2 == 0)
                printf("Gia tri vua nhap khong phai so le, vui long nhap lai!\n");
        } while (a[i] % 2 == 0); 
    }

    printf("Mang vua nhap la: [");
    for (i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n - 1) printf(", ");
    }
    printf("]\n");

    return 0;
}

