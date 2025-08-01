#include <stdio.h>
int main() {
    int a, b;
    printf("Nhap vao 2 so nguyen duong bat ky:");
    scanf("%d %d", &a, &b);
    int temp;
    if (a > b) {
        for (int i = 1; i <= b; i++) {
            if (a % i == 0 && b % i == 0) {
                temp = i;
            }
        }
    }else {
        for (int i = 1; i <= a; i++) {
            if (a % i == 0 && b % i == 0) {
                temp = i;
            }
        }
    }
    printf("Uoc chung lon nhat cua 2 so la: %d", temp);
}