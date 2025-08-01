#include <stdio.h>
int main() {
    int number;
    printf("Nhap so bat ky tu 1 den 10: ");
    scanf("%d", &number);
    printf("Bang cuu chuong %d\n", number);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", i, number, i*number);
    }
}