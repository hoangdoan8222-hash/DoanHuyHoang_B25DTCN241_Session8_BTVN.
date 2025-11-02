#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5}; 
    int i;

    for (i = 0; i < 5; i++) {
        if (a[i] % 2 == 0)
            a[i] += 3; 
        else
            a[i] += 2; 
    }

    printf("[");
    for (i = 0; i < 5; i++) {
        printf("%d", a[i]);
        if (i < 4) printf(","); 
    }
    printf("]");

    return 0;
}

