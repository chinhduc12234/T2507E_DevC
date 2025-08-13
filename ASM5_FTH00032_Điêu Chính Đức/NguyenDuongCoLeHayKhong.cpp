#include <stdio.h>

int main() {
    int n, a;
    int b = 1;

    printf("Moi ban nhap so nguyen duong n: ");
    scanf("%d", &n);

    while (n > 0) {
        a = n % 10;     
        if (a % 2 == 0) { 
            b = 0;       
            break;           
        }
        n /= 10;
    }

    if (b)
        printf("YES - So co toan chu so le\n");
    else
        printf("NO - So khong co toan chu so le\n");
}

