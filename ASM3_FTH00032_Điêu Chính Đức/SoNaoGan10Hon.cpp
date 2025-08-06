#include <stdio.h>

int main(){
	int a, b;
	printf("Moi ban hay nhap a vao: ");
	scanf("%d", &a);
	printf("Moi ban hay nhap b vao: ");
	scanf("%d", &b);
	
	int x1, x2;

	if (a - 10 < 0) {
		x1 = -(a - 10);
	}else{
		x1 = a - 10;	
	}
	
	if (b - 10 < 0){
		x2 = -(b - 10);	
	}
	else{
		x2 = b - 10;	
	}

	if(x1 < x2){
		printf("So a gan voi so 10 hon!");
	}else if(x1 > x2){
		printf("So b gan voi so 10 hon!");
	}else{
		printf("Hai so cach 10 bang nhau!");
	}
}

