#include <stdio.h>

int main() {
    int a[100];
    int n, i;
    int last; 
    int found = 0;  

    printf("Nhap so phan tu: ");
    scanf("%d", &n);


    for(i = 0; i < n; i++) {
        printf("Nhap so %d: ", i + 1);
        scanf("%d", &a[i]);
    }


    for(i = n - 1; i >= 0; i--) {
        if(a[i] % 2 != 0) {
            last = a[i];
            found = 1;
            break;
        }
    }

    if(found) {
        printf("So le cuoi cung trong mang la: %d", last);
    } else {
        printf("Mang khong co so le nao.");
    }
}

