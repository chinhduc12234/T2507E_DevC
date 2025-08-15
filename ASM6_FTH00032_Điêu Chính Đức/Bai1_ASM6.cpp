#include <stdio.h>

int main() {
    int n, i;
    int a[100];
    int tong = 0;  
    int dem = 0;  

    printf("Nhap so phan tu: ");
    scanf("%d", &n);


    for(i = 0; i < n; i++) {
        printf("Nhap so %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++) {
        if(a[i] % 2 != 0) {   
            tong += a[i];    
            dem++;          
        }
    }

    if(dem > 0) {
        printf("Trung binh cong cac so le = %.2f", (float)tong / dem);
    } else {
        printf("Khong co so le trong mang!");
    }
}

