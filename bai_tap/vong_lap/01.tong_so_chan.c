// Tính tổng các số chẵn từ 1 đến n, với n nhập từ bàn phím
#include <stdio.h>

int main()
{
    int n, tong = 0;

    printf("Nhập số n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2)
    {
        tong += i;
    }

    printf("Tổng các số từ 1-%d là: %d", n, tong);

    return 0;
}