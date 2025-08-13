#include <stdio.h>

int main() {
    int n, a;

    printf("Moi ban nhap so nguyen duong n: ");
    scanf("%d", &n);

    while (n >= 10) {
        n /= 10;
    }
    
    a = n;
    printf("Chu so dau tien la: %d\n", a);
}

