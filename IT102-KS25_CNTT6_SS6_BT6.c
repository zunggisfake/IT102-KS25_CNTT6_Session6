#include <stdio.h>
int main() {
    float a, b;
    int choose;
    printf("Nhap vao 2 so bat ky: ");
    scanf("%f %f", &a, &b);
    do {
        printf("\tCACULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. THoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choose);
        switch (choose) {
            case 1:
                printf("Tong 2 so la: %.2f\n", a + b);
                break;
            case 2:
                printf("Hieu 2 so la: %.2f\n", a - b);
                break;
            case 3:
                printf("Tich 2 so la: %.2f\n", a * b);
                break;
            case 4:
                printf("Thuong 2 so la: %.2f\n", a / b);
                break;
            case 5:
                printf("Thoat chuong trinh.");
                break;
            default:
                printf("Lua chon khong hop le! Vui long chon lai\n");
        }
    } while (choose != 5);
}