#include <stdio.h>
int main() {
    int number = 23;
    int yourNumber;
    printf("Nhap 1 so bat ky(2 chu so): ");
    while (number != yourNumber) {
        scanf("%d", &yourNumber);
        if (number == yourNumber) {
            printf("So ban nhap trung voi so cho truoc roi! \n");
            break;
        }else if (number < yourNumber) {
            printf("So ban nhap lon hon so cho truoc roi! \n");
        }else if (number > yourNumber) {
            printf("So ban nhap nho hon so cho truoc roi! \n");
        }else {
            printf("So ban nhap chua dung roi vui long nhap lai! \n");
        }
    }
}