// Viết chương trình giải phương trình bậc 1 ax+b=0
// Kiểm tra tất cả các trường hợp

#include<stdio.h>

int main() {
    float a, b;

    printf("Nhập a, b: ");
    scanf("%f %f", &a, &b);

    if (!a) {
        if (!b) {
            printf("PT có vô số nghiệm");
        } else {
            printf("PT vô nghiệm");
        }
    } else {
        printf("PT có nghiệm x = %.2f", -b/a);
    }
    return 0;
}