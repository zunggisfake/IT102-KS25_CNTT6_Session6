#include <stdio.h>

int main() {
    int number;
    printf("Nhap so bat ky: ");
    scanf("%d", &number);
    int temp1;
    int temp2 = 10000000;
    while (temp2 > 0) {
        temp1 = number / temp2;
        number = number % temp2;
        if (temp1 > 0) {
            printf("[%d]\t", temp1);
        }
        temp2 /= 10;
    }
}
