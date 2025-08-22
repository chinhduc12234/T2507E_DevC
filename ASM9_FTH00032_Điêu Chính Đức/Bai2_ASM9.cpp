#include <stdio.h>

int ucln(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int a, b;
    printf("Moi ban nhap a: ");
    scanf("%d", &a);
    printf("Moi ban nhap b: ");
    scanf("%d", &b);

    printf("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, ucln(a, b));
}

