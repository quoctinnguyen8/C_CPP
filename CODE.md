# Bài tập lập trình cơ bản

## Ngày 06/09/2026

#### 1/ Viết chương trình nhập vào bán kính hình tròn, in ra chu vi và diện tích. Lấy `π = 3.1416`.

Diện tích: `S=π*r*r` Chu vi: `C=2*π*r`. Với `r` là bán kính.

```c
#include <stdio.h>

int main() {
    const float PI = 3.1416;    // tạo hằng số PI
    float r, S, C;

    printf("Nhập bán kính: ");
    scanf("%f", &r);

    S = PI * r * r;
    C = 2 * PI * r;

    printf("Diện tích: %.2f\n", S);
    printf("Chu vi: %.2f\n", C);
    return 0;
}
```

#### 2/ Viết chương trình nhập vào số giờ, phút, in ra số giây.

> Ví dụ: 2 giờ 14 phút => 8040 giây

```c
#include <stdio.h>

int main() {
    int gio, phut, giay;

    printf("Nhập số giờ: ");
    scanf("%d", &gio);
    printf("Nhập số phút: ");
    scanf("%d", &phut);

    // đổi ra giây
    giay = gio * 3600 + phut * 60;

    printf("%d giờ %d phút ==> %d giây", gio, phut, giay);
    return 0;
}

```