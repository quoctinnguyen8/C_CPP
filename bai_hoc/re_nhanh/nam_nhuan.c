// Viết chương trình kiểm tra năm nhập vào có là năm nhuận hay không.
// Biết rằng năm nhuận là năm chia hết cho 4 nhưng không chia hết cho 100
// hoặc là năm chia hết cho 400

#include<stdio.h>

int main() {
    int year;
    printf("Nhập vào 1 năm để kiểm tra: ");
    scanf("%d", &year);

    // Kiểm tra năm nhuận hay không
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d là năm nhuận", year);
    } else {
        printf("%d không phải năm nhuận", year);
    }

    return 0;
}