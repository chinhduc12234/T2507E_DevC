#include <stdio.h>

int main() {
    int ngay, thang, nam;
    int tongNgay;

    printf("Moi ban hay nhap ngay vao: ");
    scanf("%d", &ngay);
    printf("Moi ban hay nhap ngay thang: ");
    scanf("%d", &thang);
    printf("Moi ban hay nhap ngay nam: ");
    scanf("%d", &nam);

    int laNamNhuan;
    if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
        laNamNhuan = 1;
    }
    
    if(ngay < 1 || ngay > 31 || thang < 1 || thang > 12){
    	printf("Ngay hoac thang cua ban nhap sai!");
	}else {
		if (thang > 1) {
        tongNgay += 31;
    }
    if (thang > 2) {
        if (laNamNhuan) {
            tongNgay += 29;
        } else {
            tongNgay += 28;
        }
    }
    if (thang > 3) {
        tongNgay += 31;
    }
    if (thang > 4) {
        tongNgay += 30;
    }
    if (thang > 5) {
        tongNgay += 31;
    }
    if (thang > 6) {
        tongNgay += 30;
    }
    if (thang > 7) {
        tongNgay += 31;
    }
    if (thang > 8) {
        tongNgay += 31;
    }
    if (thang > 9) {
        tongNgay += 30;
    }
    if (thang > 10) {
        tongNgay += 31;
    }
    if (thang > 11) {
        tongNgay += 30;
    }

    tongNgay += ngay;

    printf("Ngay %d/%d/%d la ngay thu %d trong nam", ngay, thang, nam, tongNgay);
	}
}

