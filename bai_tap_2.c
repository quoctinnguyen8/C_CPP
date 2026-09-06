// Viết chương trình nhập vào độ dài 2 cạnh a, b của hình chữ nhật,
// in ra chu vi và diện tích

#include<stdio.h>

int main(){
    float a, b;

    printf("Nhập kích thước hình chữ nhật: ");
    scanf("%f %f", &a, &b);

    float cv = 2 * (a + b);
    float dt = a *b;

    printf("Chu vi = %f\nDiện tích: %f", cv, dt);

    return 0;
}