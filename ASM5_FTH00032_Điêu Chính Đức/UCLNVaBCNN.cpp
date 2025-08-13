#include <stdio.h>

int main() {
    int a, b, i, ucln, bcnn;

    printf("Moi ban nhap so a: ");
    scanf("%d", &a);
    printf("Moi ban nhap so b: ");
    scanf("%d", &b);

    for (i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            ucln = i;
        }
    }
    bcnn = (a * b) / ucln;

    printf("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, ucln);
    printf("Boi chung nho nhat cua %d va %d la: %d\n", a, b, bcnn);
}

