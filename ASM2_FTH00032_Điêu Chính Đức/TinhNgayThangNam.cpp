#include <stdio.h>

int main() {
    int ngay;
	int thang;
	int nam;
    int soNgayTrongThang = 0;
    int laNamNhuan = 0;

    printf("Moi ban hay nhap ngay: ");
    scanf("%d", &ngay);
    printf("Moi ban hay nhap thang: ");
    scanf("%d", &thang);
    printf("Moi ban hay nhap nam: ");
    scanf("%d", &nam);

    if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
        laNamNhuan = 1;
    }

    if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) {
        soNgayTrongThang = 31;
    } else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
        soNgayTrongThang = 30;
    } else if (thang == 2) {
        if (laNamNhuan == 1) {
            soNgayTrongThang = 29;
        } else {
            soNgayTrongThang = 28;
        }
    } else {
        printf("Thang chua hop le!\n");
        return 1;
    }
    if (ngay >= 1 && ngay < soNgayTrongThang) {
        ngay = ngay + 1;
    } else if (ngay == soNgayTrongThang) {
        ngay = 1;
        thang = thang + 1;
        if (thang > 12) {
            thang = 1;
            nam = nam + 1;
        }
    } else {
        printf("Ngay hoac thang khong hop le!\n");
    }
    printf("Ngay ke tiep la: %d/%d/%d\n", ngay, thang, nam);
}

