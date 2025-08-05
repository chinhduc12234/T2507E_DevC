#include <stdio.h>

int main() {
    int soTien;
    int to500 = 0, to200 = 0, to100 = 0, to50 = 0, to20 = 0, to10 = 0;

    printf("Moi ban hay nhap so tien ban can rut: ");
    scanf("%d", &soTien);

    if (soTien % 10000 != 0 || soTien <= 0) {
        printf("So tien khong hop le hoac bon toi khong co tien le!");
    }else{
    to500 = soTien / 500000;
    soTien = soTien % 500000;

    to200 = soTien / 200000;
    soTien = soTien % 200000;

    to100 = soTien / 100000;
    soTien = soTien % 100000;

    to50 = soTien / 50000;
    soTien = soTien % 50000;

    to20 = soTien / 20000;
    soTien = soTien % 20000;

    to10 = soTien / 10000;
    soTien = soTien % 10000;

    printf("So to tien can in ra cho khach la:\n");
    if (to500 > 0) printf("%d to 500,000\n", to500);
    if (to200 > 0) printf("%d to 200,000\n", to200);
    if (to100 > 0) printf("%d to 100,000\n", to100);
    if (to50 > 0)  printf("%d to 50,000\n", to50);
    if (to20 > 0)  printf("%d to 20,000\n", to20);
    if (to10 > 0)  printf("%d to 10,000\n", to10);	
	}
}

