#include <stdio.h>
int main() {
    // Khai bao cac bien 
    float num1, num2;
    int choice;

    do {
        // Hien thi menu 
        printf("CALCULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        // Kiem tra 
        if (choice == 5) {
            printf("Thoat chuong trinh.\n");
            break;
        }
        // Yeu cau nhap 2 so 
        printf("Nhap so thu nhat: ");
        scanf("%f", &num1);
        printf("Nhap so thu hai: ");
        scanf("%f", &num2);
        // Xu ly noi dung tu 1 den 5 
        switch(choice) {
            case 1:
                printf("Tong cua %.2f va %.2f la: %.2f\n", num1, num2, num1 + num2);
                break;
            case 2:
                printf("Hieu cua %.2f va %.2f la: %.2f\n", num1, num2, num1 - num2);
                break;
            case 3:
                printf("Tich cua %.2f va %.2f la: %.2f\n", num1, num2, num1 * num2);
                break;
            case 4:
                if (num2 != 0) {
                    printf("Thuong cua %.2f va %.2f la: %.2f\n", num1, num2, num1 / num2);
                } else {
                    printf("Loi: Khong the chia cho 0.\n");
                }
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
        
    } while (choice != 5);

    return 0;
}
