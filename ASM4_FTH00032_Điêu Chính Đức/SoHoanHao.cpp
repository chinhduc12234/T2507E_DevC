#include <stdio.h>

int main(){
    int a;
    printf("Moi ban nhap so a vao: ");
    scanf("%d", &a);

    int i = 1;
    int tongUoc = 0;

    while (i < a){
        if (a % i == 0){
            tongUoc = tongUoc + i;
        }
        i++;
    }

    if (tongUoc == a){
        printf("So %d la so hoan hao.\n", a);
    } else {
        printf("So %d khong phai la so hoan hao.\n", a);
    }
}

