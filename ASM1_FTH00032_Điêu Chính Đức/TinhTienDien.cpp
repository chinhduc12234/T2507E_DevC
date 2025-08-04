#include <stdio.h>

int main(){
	double tien;
	int kw;
	
	printf("Moi ban hay nhap Kw dien: ");
	scanf("%d", &kw);
	
	if(kw < 0){
		printf("So tien khong hop le!");
	}else if(kw <= 50){
		tien = kw * 1.678;
	}else if(kw <= 100){
		tien = 50 * 1.678 + (kw -50) * 1.734;
	}else if(kw > 101 && kw <200){
		tien = 50 * 1.678 + 50 * 1.734 + (kw - 100) * 2.014;
	}else{
		  tien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + (kw - 200) * 2.536;
	}
	printf("Tien dien la: %2.f", tien);
}
