// 8 <= điểm <= 10  => Giỏi
// 6 <= điểm < 8    => Khá
// 4 <= điểm < 6    => TB
// 0 <= điểm < 4    => Yếu

#include<stdio.h>

int main() {
    float diem;

    // Nhập điểm - tự viết

    if (diem < 0 || diem > 10) {
        printf("Điểm không hợp lệ");
    } else if (diem >= 8 && diem <= 10) {
        printf("Giỏi");
    } else if (diem >= 6) {
        printf("Khá");
    }

    return 0;
}