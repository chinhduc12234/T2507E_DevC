#include <stdio.h>

int main() {
    int n;
    printf("Moi ban nhap so nguyen n: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("F0 = 0");
    } else if (n == 1) {
        printf("F1 = 1");
    } else {
        int a = 0;
        int b = 1;
        int i = 2; 
        int fib;  

        while (i <= n) {
            fib = a + b;
            a = b;      
            b = fib; 
            i++;
        }
        printf("F%d = %d", n, b);
    }
}

