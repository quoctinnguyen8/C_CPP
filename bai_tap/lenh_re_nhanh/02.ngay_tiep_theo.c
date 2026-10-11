// Viết chương trình nhập vào ngày, tháng, năm.
// Tìm ngày, tháng, năm tiếp theo của ngày vừa nhập vào.
// Ví dụ: 31/12/2017 => Ngày tiếp theo: 1/1/2018

#include <stdio.h>

int main()
{
    int d, m, y;
    printf("Nhập vào ngày, tháng, năm: ");
    scanf("%d %d %d", &d, &m, &y);

    // Nếu ngày tiếp theo vượt quá ngày cuối cùng của tháng
    // thì đặt ngày về 1, và tăng tháng thêm 1
    // Tương tự với tháng và năm

    d++;
    int k; // ngày cuối của tháng
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
        k = 31;
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        k = 30;
    }
    else
    {
        if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
        {
            k = 29; // năm nhuận
        }
        else
        {
            k = 28;
        }
    }

    if (d > k)
    {
        d = 1;
        m++;
        if (m > 12)
        {
            m = 1;
            y++;
        }
    }

    printf("Ngày tiếp theo: %d/%d/%d", d, m, y);

    return 0;
}