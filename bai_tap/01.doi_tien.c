// Viết chương trình đổi từ VNĐ sang USD
// Lấy 1 USD = 26 100 VNĐ

#include <stdio.h>

int main() {
    float vnd, usd;

    printf("Nhập vào số tiền VNĐ: ");
    scanf("%f", &vnd);

    // đổi tiền
    usd = vnd / 26100;

    printf("Số USD đổi được: %.2f", usd);

    return 0;
}