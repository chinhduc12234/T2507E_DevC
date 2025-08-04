#include <stdio.h>

int main() {
    int a, b, c;
    double tinhtoan, x1, x2;

    printf("Moi ban hay nhap a: ");
    scanf("%d", &a);
    printf("Moi ban hay nhap b: ");
    scanf("%d", &b);
    printf("Moi ban hay nhap c: ");
    scanf("%d", &c);

    tinhtoan = b * b - 4 * a * c;

    if (tinhtoan < 0) {
        printf("Phuong trinh vo nghiem.");
    } else if (tinhtoan == 0) {
        x1 = -b / (2 * a);
        printf("Phuong trinh co nghiem kep: x = %.2f", x1);
    } else {
        double sqrt;
        sqrt = 1;
        while (sqrt * sqrt < tinhtoan) {
            sqrt = sqrt + 0.0001;
        }

        x1 = (-b + sqrt) / (2 * a);
        x2 = (-b - sqrt) / (2 * a);

        printf("Phuong trinh co 2 nghiem:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }
}

