// Viết chương trình nhập vào 3 số a, b, c
// In 3 số ra màn hình theo thứ tự tăng dần

#include<stdio.h>

int main() {
    int a, b, c;
    printf("Nhập vào 3 số: ");
    scanf("%d %d %d", &a, &b, &c);

    int t;
    if (a > b) {
        t = a;
        a = b;
        b = t;
    }
    if (a > c) {
        t = a;
        a = c;
        c = t;
    }
    if (b > c) {
        t = b;
        b = c;
        c = t;
    }
    printf("Kết quả: %d %d %d", a, b, c);

    return 0;
}