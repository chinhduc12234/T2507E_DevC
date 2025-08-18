#include <stdio.h>

int main() {
    int a[100];
    int n, i;
    int nhoNhat, lonNhat;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Nhap so %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    nhoNhat = lonNhat = a[0];

    for(i = 1; i < n; i++) {
        if(a[i] < nhoNhat)
            nhoNhat = a[i];
        if(a[i] > lonNhat)
            lonNhat = a[i];
    }

    printf("Doan %d toi %d chua tat ca gia tri trong mang.", nhoNhat, lonNhat);
}

