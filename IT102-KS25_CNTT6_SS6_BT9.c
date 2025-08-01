#include <stdio.h>
int main() {
    int choose;
    do {
        printf("\tMENU\n");
        printf("1. Nhap 3 so\n");
        printf("2. Tong 3 so\n");
        printf("3. Trung binh cong 3 so\n");
        printf("4. So nho nhat\n");
        printf("5. So lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choose);
        switch (choose) {
            case 1:
                int a, b, c;
                printf("Nhap vao 3 so bat ky:");
                scanf("%d %d %d", &a, &b, &c);
                int temp;
                if (a > b) {
                    temp = a;
                    a = b;
                    b = temp;
                }
                if (a > c) {
                    temp = a;
                    a = c;
                    c = temp;
                }
                if (b > c) {
                    temp = b;
                    b = c;
                    c = temp;
                }
                break;
            case 2:
                int tong = a + b + c;
                printf("Tong 3 so la: %d\n", tong);
                break;
            case 3:
                float tbc = (float)tong / 3;
                printf("trung binh cong 3 so la: %.2f\n", tbc);
                break;
            case 4:
                printf("So nho nhat la: %d\n", a);
                break;
            case 5:
                printf("So lon nhat la: %d\n", c);
                break;
            case 6:
                printf("Thoat\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (choose != 6);
}