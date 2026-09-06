// Viết chương trình hoán vị 2 số
#include <stdio.h>

int main()
{
    int a = 1;
    int b = 2;

    // Hoán vị
    int c = a;
    a = b;
    b = c;

    printf("a = %d, b = %d", a, b);
    return 0;
}