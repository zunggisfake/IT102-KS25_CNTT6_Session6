#include <stdio.h>
int main() {
    int number;
    int temp = 0;
    printf("Nhap vao so bat ky: ");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++) {
        temp += i;
    }
    printf("Tong tat ca cac so tu 1 cho den %d la: %d", number, temp);
}