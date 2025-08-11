#include <stdio.h>

int main(){
	int a;
	printf("Moi ban hay nhap a vao: ");
	scanf("%d", &a);
	
	int n = 1;

	while (n < a){
		if (n % 2 != 0){
			printf("%d\n", n);
		}
		n++;
	}
	printf("So da nhap vao la: %d\n", a);
}

