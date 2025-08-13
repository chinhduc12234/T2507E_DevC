#include <stdio.h>

int main() {
    int n, a = 0, b;

    printf("Moi ban nhap so nguyen duong n: ");
    scanf("%d", &n);

    while (n > 0) {
        b = n % 10;      
        if (b > a)
            a = b;
        n /= 10;  
    }

    printf("Chu so lon nhat la: %d\n", a);
}

