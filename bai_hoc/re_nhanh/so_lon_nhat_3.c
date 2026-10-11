// Viết chương trình nhập vào 3 số nguyên, tìm giá trị lớn nhất.

#include<stdio.h>

int main() {
    int a, b, c;
    printf("Nhập vào 3 số: ");
    scanf("%d %d %d", &a, &b, &c);

    // tìm số lớn nhất và in ra màn hình
    int max;
    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    // int max = a > b ? a : b;
    if (max < c) {
        max = c;
    }

    printf("Số lớn nhất: %d", max);
    return 0;
}