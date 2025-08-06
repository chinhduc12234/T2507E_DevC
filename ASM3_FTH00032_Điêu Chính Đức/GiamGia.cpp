#include <stdio.h>

int main(){
	int tien;
	double tienTra;
	
	printf("Moi ban hay nhap tien mua hang: ");
	scanf("%d", &tien);
	
	double giamGia1 = tien * 0.1;
	double giamGia2 = tien * 0.05;
	double tienPhaiTra1;
	double tienPhaiTra2;
	
	if(tien < 200){
		printf("So tien ban phai tra la: %dk", tien);
	}else if(tien >= 500){
		tienPhaiTra1 = tien - giamGia1;
		printf("So tien ban phai tra la: %.2fk", tienPhaiTra1);
	}else{
		tienPhaiTra2 = tien - giamGia2;
		printf("So tien ban phai tra la: %.2fk", tienPhaiTra2);
	}
}

