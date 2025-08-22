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
    printf("Moi ban nhap n: ");
    scanf("%d", &n);

    int ketQua = tongChuSo(n);
    printf("Tong cac chu so cua %d la: %d\n", n, ketQua);
}

