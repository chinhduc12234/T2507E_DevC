#include <stdio.h>

int main() {
    int a[100];
    int n, i;
    int min;   
    int found = 0; 

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    
    for(i = 0; i < n; i++) {
        printf("Nhap so %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    
    for(i = 0; i < n; i++) {
        if(a[i] > 0) { 
            if(!found) {      
                min = a[i];
                found = 1;
            } else if(a[i] < min) {
                min = a[i];
            }
        }
    }

    if(found) {
        printf("So duong nho nhat trong mang la: %d", min);
    } else {
        printf("Mang khong co so duong nao.");
    }
}

