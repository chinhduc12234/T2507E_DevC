#include <stdio.h>

int main(){
    int a;
    printf("Moi ban nhap so a vao: ");
    scanf("%d", &a);

    int dao = 0;
    int soGoc = a;

    while (a != 0){
        int chuSo = a % 10;
        dao = dao * 10 + chuSo;
        a = a / 10;
    }

    printf("So dao nguoc cua %d la: %d\n", soGoc, dao);
}

