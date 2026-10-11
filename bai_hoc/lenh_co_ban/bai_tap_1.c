// Viết chương trình nhập vào độ dài cạnh a của hình vuông
// in ra chu vi và diện tích hình vuông đó.

#include <stdio.h>

int main()
{
    int a;

    printf("Nhập vào độ dài cạnh (hình vuông): ");
    scanf("%d", &a);

    int cv = a * 4;
    int dt = a * a;

    printf("Chu vi = %d,\nDiện tích: %d", cv, dt);

    return 0;
}