#include<stdio.h>
int main(){
	// Khai bao bien n 
	int n;
	// Nhap so tu 1 den 10
	do{
		printf("Moi ban nhap so 1 den 10: ");
		scanf("%d", &n);
		// Kiem tra dieu kien
		if( n < 1 || n > 10){
			printf("So ban nhap khong hop le.Vui long nhap lai!\n");
		} 
	}while ( n < 1 || n > 10);
	// In ra bang cuu truong
	printf("Bang cu truong cua %d la:\n", n);
	for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
    
	
}
