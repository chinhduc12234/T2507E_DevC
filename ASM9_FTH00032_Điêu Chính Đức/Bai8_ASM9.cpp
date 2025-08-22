#include <stdio.h>

int timMin(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("So thu %d = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Phan tu nho nhat trong mang la: %d\n", timMin(arr, n));
}

