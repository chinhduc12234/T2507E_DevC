#include <stdio.h>

int main (){
	int a;
	int b;
	int c;
	printf("Moi ban hay nhap a:");
	scanf("%d", &a);
	printf("Moi ban hay nhap b:");
	scanf("%d", &b);
	printf("Moi ban hay nhap c:");
	scanf("%d", &c);
	
	
	int d;
	int e;
	int f;
	
	d = b + c;
	e = a + c;
	f = a + b;
	
	if(a == 0 || b == 0 || c == 0){
		printf("Khong the thanh 1 hinh tam giac vi co mot canh bang 0!");
	}else if(d > a && e > b && f > c){
		printf("La mot hinh tam giac!");
	}else{
		printf("Khong phai la mot hinh tam giac!");
	}
}
