#include <stdio.h>

int main() {
    double thuNhap;
    double thue = 0;

    printf("Moi ban hay nhap so tien thu nhap cua minh: ");
    scanf("%lf", &thuNhap);

    if (thuNhap <= 11){
    	printf("Ban chua can phai nop thue!");
	} else if (thuNhap > 11 || thuNhap <= 18){
		thue = 5 * 0.05 + 5 * 0.10 + (thuNhap - 10) * 0.15;
		printf("So tien thue phai nop: %.2lf trieu dong\n", thue);
	}else if (thuNhap <= 32){
		thue = 5 * 0.05 + 5 * 0.10 + 8 * 0.15 + (thuNhap - 18) * 0.20;
		printf("So tien thue phai nop: %.2lf trieu dong\n", thue);
	}else if (thuNhap <= 52){
		thue = 5 * 0.05 + 5 * 0.10 + 8 * 0.15 + 14 * 0.20 + (thuNhap - 32) * 0.25;
		printf("So tien thue phai nop: %.2lf trieu dong\n", thue);
	}else if (thuNhap <= 80){
		thue = 5 * 0.05 + 5 * 0.10 + 8 * 0.15 + 14 * 0.20 + 20 * 0.25 + (thuNhap - 52) * 0.30;
		printf("So tien thue phai nop: %.2lf trieu dong\n", thue);
	}else{
		thue = 5 * 0.05 + 5 * 0.10 + 8 * 0.15 + 14 * 0.20 + 20 * 0.25 + 28 * 0.30 + (thuNhap - 80) * 0.35;
		printf("So tien thue phai nop: %.2lf trieu dong\n", thue);
	}
}

