#include <stdio.h>

int main() {
    int a[100];
    int n, i, x;
    int found = 0;


    printf("Nhap so x can tim: ");
    scanf("%d", &x);


    for(i = 0; i < n; i++) {
        if(a[i] == x) {
            found = 1;
            break;
        }
    }

    if(found) {
        printf("So %d co trong mang (o vi tri chi so %d).", x, i);
    } else {
        printf("So %d khong co trong mang.", x);
    }
}

