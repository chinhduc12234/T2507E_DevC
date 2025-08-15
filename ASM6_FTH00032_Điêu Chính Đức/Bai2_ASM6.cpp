#include <stdio.h>

int main() {
    int a[100];
    int n, i;
    int tong = 0, dem = 0;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);


    for(i = 0; i < n; i++) {
        printf("Nhap so %d: ", i + 1);
        scanf("%d", &a[i]);
    }


    for(i = 0; i < n; i += 2) {
        if(a[i] % 2 != 0) {   
            tong += a[i];
            dem++;
        }
    }

    if(dem > 0) {
        printf("Trung binh cong cac so le o vi tri chan = %.2f", (float)tong / dem);
    } else {
        printf("Khong co so le o vi tri chan trong mang!");
    }
}

