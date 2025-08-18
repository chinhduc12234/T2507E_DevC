#include <stdio.h>

int main() {
    int a[100];
    int n, i, x;
    int lonNhat = -1; 
    int giaTri;      

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Nhap so %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Nhap so nguyen x: ");
    scanf("%d", &x);

    for(i = 0; i < n; i++) {
        int b;
        if(a[i] > x)
            b = a[i] - x;
        else
            b = x - a[i];

        if(b > lonNhat) {
            lonNhat = b;
            giaTri = a[i];
        }
    }

    printf("Gia tri trong mang xa %d nhat la: %d", x, giaTri);
}

