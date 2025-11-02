#include <stdio.h>

void themPhanTu(int arr[], int *n, int x, int pos) {
    if (pos < 0 || pos > *n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    for (int i = *n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = x;
    (*n)++;
}

void xoaPhanTu(int arr[], int *n, int pos) {
    if (pos < 0 || pos >= *n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    for (int i = pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}

void capNhatPhanTu(int arr[], int n, int pos, int x) {
    if (pos < 0 || pos >= n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    arr[pos] = x;
}

void inMang(int arr[], int n) {
    printf("Danh sach phan tu trong mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100];
    int n = 0, choice, x, pos;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Them phan tu vao vi tri bat ky\n");
        printf("2. Xoa phan tu o vi tri bat ky\n");
        printf("3. Cap nhat phan tu o vi tri bat ky\n");
        printf("4. In danh sach phan tu trong mang\n");
        printf("5. Thoat chuong trinh\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap gia tri can them: ");
                scanf("%d", &x);
                printf("Nhap vi tri muon them: ");
                scanf("%d", &pos);
                themPhanTu(arr, &n, x, pos);
                break;
            case 2:
                printf("Nhap vi tri muon xoa: ");
                scanf("%d", &pos);
                xoaPhanTu(arr, &n, pos);
                break;
            case 3:
                printf("Nhap vi tri muon cap nhat: ");
                scanf("%d", &pos);
                printf("Nhap gia tri moi: ");
                scanf("%d", &x);
                capNhatPhanTu(arr, n, pos, x);
                break;
            case 4:
                inMang(arr, n);
                break;
            case 5:
                printf("Thoat chuong trinh!\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (choice != 5);

    return 0;
}

