#include <stdio.h>

int main(){
    int a;
    printf("Moi ban nhap so nguyen a: ");
    scanf("%d", &a);

    int n = a - 1;

    while (n > 0){
        if (n % 6 == 0){
            printf("So lon nhat nho hon %d va chia het cho 2 va 3 la: %d\n", a, n);
            break;
        }
        n--;
    }
}

