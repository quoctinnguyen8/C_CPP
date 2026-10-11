#include <stdio.h>

int main()
{
    int a;

    printf("Nhập vào 1 số nguyên: ");
    scanf("%d", &a);

    // Kiểm tra và chuyển thành số dương nếu người dùng nhập số âm
    if (a < 0)
    {
        a = a * (-1);
    }

    printf("Giá trị tuyệt đối là: %d", a);

    return 0;
}