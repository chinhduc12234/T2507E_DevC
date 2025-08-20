#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int lonNhat = arr[0];
    int sum = arr[0];

    for (int i = 1; i < n; i++) {
        if (sum < 0)
            sum = arr[i];
        else
            sum += arr[i];

        if (sum > lonNhat)
            lonNhat = sum;
    }

    printf("Tong lon nhat cua day con lien tiep = %d\n", lonNhat);
}

