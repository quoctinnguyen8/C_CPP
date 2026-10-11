#include <stdio.h>

int main() {
    int a;

    printf("Nhập vào 1 số nguyên: ");
    scanf("%d", &a);

    // Kiểm tra và hiển thị kết quả
    if (a % 2 != 0) {
        printf("%d là số lẻ", a);
    } else {
        printf("%d là số chẵn", a);
    }

    return 0;
}