#include <stdio.h>

int main (){
	double a;
	printf("Hay nhap diem vao: \n");
	scanf("%lf", &a);
	
	if(a >= 9){
		printf("Hoc sinh xuat sac!");
	} else if (a >= 8){
		printf("Hoc sinh gioi!");
	} else if (a >= 6.5){
		printf("Hoc sinh kha!");
	}else if (a >= 3.5){
		printf("Hoc sinh trung binh!");
	} else {
		printf("Hoc sinh yeu!");
	}
}
