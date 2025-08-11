#include <stdio.h>

int main() {
    int n;
    printf("Moi ban nhap so nguyen n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Khong co so Fibonacci nao nho hon hoac bang %d", n);
        return 0;
    }

    int a = 0;
    int b = 1; 

    if (n < 1) {
        printf("So Fibonacci tiem can duoi la: 0");
        return 0;
    }

    while (b <= n) {
        int temp = b;
        b = a + b;
        a = temp; 
    }
    printf("So Fibonacci tiem can duoi la: %d", a);
}

