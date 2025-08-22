#include <stdio.h>

int ucln(int a, int b){
	while(b != 0){
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int bcnn(int a, int b) {
    return (a * b) / ucln(a, b);
}

int main(){
	int a,b;
	printf("Moi ban nhap a: ");
	scanf("%d",&a);
	printf("Moi ban nhap b: ");
	scanf("%d",&b);
	printf("Boi chung nho nhat cua %d va %d la: %d\n", a, b, bcnn(a, b));
}
