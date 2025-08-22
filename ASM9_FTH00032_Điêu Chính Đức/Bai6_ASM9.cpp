#include <stdio.h>

int tongChuSo(int n) {
    int tong = 0;
    while (n > 0) {
        tong += n % 10;
        n /= 10;       
    }
    return tong;
}

int main() {
    int n;
    printf("Moi ban nhap so nguyen duong: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui long nhap so nguyen duong hop le!\n");
    } else {
        printf("Tong cac chu so cua %d la: %d\n", n, tongChuSo(n));
    }
}

