#include <stdio.h>

int main() {
    int number;
    printf("Nhap so bat ky: ");
    scanf("%d", &number);
    int temp1;
    int temp2 = 10;
    while (number > 0) {
        temp1 = number % temp2;
        printf("[%d]\n", temp1);
        number = number / temp2;
    }
}
