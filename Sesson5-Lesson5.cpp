#include<stdio.h>
int main(){
	// vong lap tu 1 den 9
    for (int n = 1; n <= 9; n++) {  
    printf("Bang cu truong cua %d la:\n", n);
	// In ra bang cuu truong
	for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", n, i, n * i);
    }
}
    return 0;
    
}
