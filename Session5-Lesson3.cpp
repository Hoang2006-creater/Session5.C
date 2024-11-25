#include<stdio.h>
int main(){
	//Nhap vao so n va tinh tong tu 1 den n 
	// Khai bao n, sum
	int n;
	int sum = 0;
	// Nhap gia tri cho n 
	printf("Nhap gia tri duong bat ki: ");
	scanf("%d", &n);
	// Xu ly tinh toan( su dung vong lap for)
	for(int i = 1; i<=n; i++){
		sum = sum + i;
		printf("Lan lap thu %d, ket qua cua sum la: %d\n", i, sum);
	}
	// Hien ket qua 
	printf("Ket qua cua ban la: %d\n",n , sum);

	return 0;
}

