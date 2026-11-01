#include <stdio.h>

int main()
{
    int n = 5;

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}