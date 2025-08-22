#include <stdio.h>

int daoNguoc(int n) {
    int daoSo = 0;
    int soDau = 1; 

    if (n < 0) {
        soDau = -1;
        n = -n;
    }

    while (n > 0) {
        daoSo = daoSo * 10 + n % 10;
        n /= 10;
    }

    return daoSo * soDau;
}

int main() {
    int n;
    printf("Nhap so nguyen: ");
    scanf("%d", &n);

    printf("So dao nguoc cua %d la: %d\n", n, daoNguoc(n));
}

