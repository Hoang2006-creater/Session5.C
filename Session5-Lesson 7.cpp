#include<stdio.h>
int main(){
	// Nhap so nguyen duong thu nhat va thu hai
	int num1, num2;
	printf("Moi ban nhap so nguyen duong thu nhat: ");
	scanf("%d", &num1);
	printf("Moi ban nhap so nguyen duong thu hai: ");
	scanf("%d", &num2);
	// Tim uoc chung lon nhat
	for (int i = num1; i > 1 ; i--){
	    if(num1 % i == 0 && num2% i == 0){
		printf("Uoc chung lon nhat cua %d va %d la: %d", num1, num2, i);
	break; 
	} 
}
return 0;	
}
