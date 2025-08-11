#include <stdio.h>

int main(){
    int n;
    printf("Moi ban nhap so nguyen n: ");
    scanf("%d", &n);

    if (n <= 1){
        printf("%d khong phai la so nguyen to", n);
    }

    int i = 2;
    int laNguyenTo = 1;

    while (i < n){
        if (n % i == 0){
            laNguyenTo = 0;
            break;
        }
        i++;
    }

    if (laNguyenTo){
        printf("%d la so nguyen to", n);
    } else {
        printf("%d khong phai la so nguyen to", n);
    }
}

