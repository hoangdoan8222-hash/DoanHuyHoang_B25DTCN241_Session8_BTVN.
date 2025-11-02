#include <stdio.h>

int main() {
    int a[5] = {3, 7, 2, 9, 5}; 
    int i, max, min;

    max = min = a[0]; 
    for (i = 1; i < 5; i++) {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }

    printf("Phan tu lon nhat trong mang: %d\n", max);
    printf("Phan tu nho nhat trong mang: %d\n", min);

    return 0;
}

