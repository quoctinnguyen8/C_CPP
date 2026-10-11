// Viết chương trình nhập vào một tháng
// Kiểm tra xem tháng đó có bao nhiêu ngày
// Giả sử tháng 2 luôn là 28 ngày

#include<stdio.h>

int main() {
    int month;

    printf("Nhập vào 1 tháng để kiểm tra: ");
    scanf("%d", &month);

    switch (month) {
        case 1: case 3: case 5:
        case 7: case 8: case 10: case 12: {
            printf("Tháng %d có 31 ngày", month);
            break;
        }
        case 4: case 6: case 9: case 11:{
            printf("Tháng %d có 30 ngày", month);
            break;
        }
        case 2: {
            printf("Tháng %d có 28 ngày", month);
            break;
        }
        default: {
            // Tháng 13, 19, -1, 0,...
            printf("Tháng %d là tháng không hợp lệ");
            break;
        }
    }

    return 0;
}