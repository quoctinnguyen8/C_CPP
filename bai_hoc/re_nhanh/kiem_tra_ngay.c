// Viết chương trình nhập vào một tháng
// Kiểm tra xem tháng đó có bao nhiêu ngày
// Giả sử tháng 2 luôn là 28 ngày

#include<stdio.h>

int main() {
    int month;

    printf("Nhập vào 1 tháng để kiểm tra: ");
    scanf("%d", &month);

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        printf("Tháng %d có 31 ngày", month);
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        printf("Tháng %d có 30 ngày", month);
    } else if (month == 2) {
        printf("Tháng %d có 28 ngày", month);
    } else {
        // Tháng 13, 19, -1, 0,...
        printf("Tháng %d là tháng không hợp lệ");
    }

    return 0;
}