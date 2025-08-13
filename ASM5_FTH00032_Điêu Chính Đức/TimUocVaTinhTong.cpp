#include <stdio.h>

int main() {
    int n, i;
    int tong = 0;

    printf("Moi ban nhap so nguyen n: ");
    scanf("%d", &n);

    printf("Cac uoc cua %d la: ", n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
            tong += i;     
        }
    }
    printf("\nTong cac uoc cua %d la: %d\n", n, tong);
}

