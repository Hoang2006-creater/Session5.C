#include<stdio.h>
int main(){
	int n; 
	while (1){
		printf("Nhap n: ");
		scanf("%d", &n);
		if(n == 25){
			goto end;
		}
		else {
			printf("Nhap lai\n");
		}
	}
	end:	
	return 0;
}

