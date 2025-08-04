#include <stdio.h>

int main(){
	int a;
	int b;
	double x;
	
	printf("Moi ban hay nhap a: ");
	scanf("%d", &a);
	printf("Moi ban hay nhap b: ");
	scanf("%d", &b);
	
	if(a == 0 ){
		if(b == 0){
			printf("Phuong trinh vo so nghiem");
		}else{
			printf("Phuong trinh vo nghiem");
		}
	}else{
		x = -(double)b/a;
		printf("Nghiem cua phuong trinh la: %.2f", x);
	}
}
