#include<stdio.h>

int main() {

    // for (int i = 2; i <= 100; i+=2) {
    //     printf("%d ", i);
    // }

    int tong = 0;
    for (int i = 1; i <= 100; i++) {
        tong = tong + i;
    }
    printf ("Tổng các số từ 1-100: %d", tong);

    return 0;
}