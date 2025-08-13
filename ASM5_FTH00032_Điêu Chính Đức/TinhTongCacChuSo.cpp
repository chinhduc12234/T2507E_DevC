#include <stdio.h>

int main() {
    int n, tong = 0, a;

    printf("Moi ban nhap so nguyen n: ");
    scanf("%d", &n);

    if (n < 0) {
        n = -n;
    }

    while (n > 0) {
        a = n % 10;  
        tong += a;     
        n /= 10;          
    }

    printf("Tong cac chu so la: %d\n", tong);
}

